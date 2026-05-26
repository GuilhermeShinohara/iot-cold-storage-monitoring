
# 🚀 Instalação e Execução do Sistema IoT - Monitoramento de Cadeia de Frio

## 📌 Visão Geral

Este documento apresenta o passo a passo completo para instalação, configuração e execução do sistema IoT de monitoramento de temperatura e umidade baseado em ESP32, MQTT, Node-RED, InfluxDB, Grafana e integração com WhatsApp API.

O objetivo é garantir que qualquer pessoa consiga **reproduzir integralmente o projeto**, desde o hardware até os dashboards e alertas.

---

## 🧰 Pré-requisitos

Antes de iniciar, certifique-se de ter os seguintes recursos:

### 💻 Software necessário
- Arduino IDE
- Node.js (LTS)
- Node-RED
- Mosquitto (MQTT Broker)
- InfluxDB (v1 ou v2 compatível)
- Grafana
- Git

### 🌐 Acesso e serviços
- Rede Wi-Fi disponível
- API de WhatsApp (Z-API, Twilio ou similar)

### 🔌 Hardware (opcional para simulação)
- ESP32 DevKit V1
- Sensor DHT22
- Protoboard
- Jumpers
- Cabo USB

---

## 📁 1. Clonando o Repositório

```bash
git clone https://github.com/seu-usuario/monitoramento-cadeia-frio-iot.git
cd monitoramento-cadeia-frio-iot

---

## 📟 2. Configuração do ESP32

### 2.1 Instalar suporte ESP32 na Arduino IDE

1. Abra a Arduino IDE
2. Vá em **File > Preferences**
3. No campo “Additional Boards Manager URLs”, adicione:

```text
https://dl.espressif.com/dl/package_esp32_index.json
```

4. Vá em **Tools > Board > Boards Manager**
5. Procure por **ESP32 by Espressif Systems** e instale

---

### 2.2 Instalar bibliotecas necessárias

Na Arduino IDE, instale:

* DHT sensor library
* Adafruit Unified Sensor
* PubSubClient

---

### 2.3 Configuração do código ESP32

Edite o arquivo:

```text
esp32/sketch.ino
```

Configure as credenciais:

```cpp
const char* ssid = "SUA_REDE_WIFI";
const char* password = "SUA_SENHA_WIFI";
const char* mqtt_server = "IP_DO_BROKER_MQTT";
```

Opcionalmente ajuste:

```cpp
const char* mqtt_topic_temp = "iot/cadeiafrio/temperatura";
const char* mqtt_topic_hum = "iot/cadeiafrio/umidade";
```

---

### 2.4 Upload para o ESP32

* Conecte o ESP32 via USB
* Selecione a placa: **ESP32 Dev Module**
* Selecione a porta serial
* Clique em **Upload**

---

## 📡 3. Instalação e Configuração do MQTT (Mosquitto)

### 3.1 Instalar Mosquitto

```bash
sudo apt update
sudo apt install mosquitto mosquitto-clients
```

---

### 3.2 Iniciar serviço

```bash
sudo systemctl start mosquitto
sudo systemctl enable mosquitto
```

---

### 3.3 Testar broker MQTT

Terminal 1:

```bash
mosquitto_sub -t iot/cadeiafrio/temperatura
```

Terminal 2:

```bash
mosquitto_pub -t iot/cadeiafrio/temperatura -m "25"
```

---

## 🔄 4. Instalação do Node-RED

### 4.1 Instalar Node-RED

```bash
sudo npm install -g --unsafe-perm node-red
```

---

### 4.2 Executar Node-RED

```bash
node-red
```

Acesse no navegador:

```text
http://localhost:1880
```

---

### 4.3 Instalar nodes adicionais

No Node-RED:

* Menu → Manage palette
* Instalar:

  * node-red-dashboard
  * node-red-node-mqtt
  * node-red-contrib-influxdb

---

### 4.4 Importar fluxos

* Menu → Import
* Selecione:

```text
node-red/fluxos.json
```

---

### 4.5 Configurar MQTT no Node-RED

* Broker: IP do Mosquitto
* Port: 1883
* Tópico:

```text
iot/cadeiafrio/#
```

---

## 🗄️ 5. Instalação do InfluxDB

### 5.1 Instalar

```bash
sudo apt install influxdb
```

---

### 5.2 Iniciar serviço

```bash
sudo systemctl start influxdb
sudo systemctl enable influxdb
```

---

### 5.3 Criar banco de dados

```bash
influx
```

```sql
CREATE DATABASE cadeia_frio;
```

---

## 📊 6. Instalação do Grafana

### 6.1 Instalar Grafana

```bash
sudo apt install grafana
```

---

### 6.2 Iniciar serviço

```bash
sudo systemctl start grafana-server
sudo systemctl enable grafana-server
```

---

### 6.3 Acessar interface

```text
http://localhost:3000
```

Login:

* admin
* admin

---

### 6.4 Configurar Data Source

* Tipo: InfluxDB
* URL: [http://localhost:8086](http://localhost:8086)
* Database: cadeia_frio

---

### 6.5 Importar dashboard

```text
grafana/dashboard.json
```

---

## 📲 7. Configuração da API do WhatsApp

### Opções:

* Z-API
* Twilio WhatsApp API

---

### 7.1 Node-RED HTTP Request

Payload:

```json
{
  "message": "⚠️ ALERTA: Temperatura fora do limite na cadeia de frio!"
}
```

---

## 🧪 8. Testes do Sistema

### 📟 ESP32

* Serial Monitor ativo
* Publicação MQTT confirmada

---

### 🔄 Node-RED

* Fluxo ativo
* Debug funcionando

---

### 🗄️ InfluxDB

```sql
SELECT * FROM temperatura;
```

---

### 📊 Grafana

* Dashboards atualizando em tempo real

---

### 📡 MQTT

* Mensagens sendo recebidas corretamente

---

## ✅ Resultado Final

O sistema opera com:

* ESP32 coletando dados do sensor DHT22
* MQTT transmitindo dados em tempo real
* Node-RED processando informações
* InfluxDB armazenando histórico
* Grafana exibindo dashboards
* WhatsApp enviando alertas automáticos

---


```
```
