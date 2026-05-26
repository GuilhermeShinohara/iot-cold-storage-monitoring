#include <WiFi.h>
#include <PubSubClient.h>
#include <DHTesp.h>

const char* ssid = "Wokwi-GUEST";
const char* password = "";

const char* mqtt_server = "broker.hivemq.com";

const char* topicTemperature = "temperature/monitoring";
const char* topicAlert = "temperature/alerts";

WiFiClient espClient;
PubSubClient client(espClient);

DHTesp dhtSensor;

const int DHT_PIN = 4;

float maxTemperature = 8.0;
float minTemperature = 0.0;

void setup_wifi() {

  Serial.println();
  Serial.print("Conectando ao WiFi ");

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("WiFi conectado!");
  Serial.println(WiFi.localIP());
}

void reconnect() {

  while (!client.connected()) {

    Serial.print("Conectando MQTT...");

    String clientId = "ESP32Client-";
    clientId += String(random(0xffff), HEX);

    if (client.connect(clientId.c_str())) {

      Serial.println(" conectado!");

    } else {

      Serial.print(" falhou ");
      Serial.print(client.state());

      delay(5000);
    }
  }
}

void setup() {

  Serial.begin(115200);

  dhtSensor.setup(DHT_PIN, DHTesp::DHT22);

  setup_wifi();

  client.setServer(mqtt_server, 1883);
}

void loop() {

  if (!client.connected()) {
    reconnect();
  }

  client.loop();

  TempAndHumidity data = dhtSensor.getTempAndHumidity();

  float temperature = data.temperature;
  float humidity = data.humidity;

  Serial.println("===============");
  Serial.print("Temperatura: ");
  Serial.print(temperature);
  Serial.println(" C");

  Serial.print("Umidade: ");
  Serial.print(humidity);
  Serial.println("%");

  String payload = "{";
  payload += "\"temperature\":";
  payload += String(temperature, 2);
  payload += ",";
  payload += "\"humidity\":";
  payload += String(humidity, 2);
  payload += "}";

  client.publish(topicTemperature, payload.c_str());

  if (temperature > maxTemperature || temperature < minTemperature) {

    String alertMessage = "ALERTA: temperatura fora do limite";

    client.publish(topicAlert, alertMessage.c_str());

    Serial.println(alertMessage);
  }

  delay(5000);
}
