# Prevenção de Perdas na Cadeia de Frio com IoT: Monitoramento Inteligente de Temperatura Integrado à WhatsApp API

Sistema IoT para monitoramento inteligente de temperatura utilizando ESP32, MQTT, Node-RED, InfluxDB e Grafana, com envio automático de alertas via WhatsApp em tempo real.

---

# 📌 Sobre o Projeto

Este projeto consiste no desenvolvimento de uma solução física de Internet das Coisas (IoT) voltada para o monitoramento contínuo de temperatura em ambientes refrigerados, como freezers, geladeiras, câmaras frias e locais de armazenamento sensíveis à variação térmica.

O sistema utiliza um sensor DHT22 conectado a um ESP32 para coletar dados de temperatura em tempo real. As informações são transmitidas via protocolo MQTT para o Node-RED, responsável pelo processamento das regras de negócio, armazenamento no InfluxDB e integração com a API do WhatsApp para envio automático de notificações em situações críticas.

Além disso, os dados são exibidos em dashboards interativos desenvolvidos no Grafana, permitindo monitoramento remoto, acompanhamento histórico e análise gerencial das informações coletadas.

O projeto foi desenvolvido como atividade acadêmica da disciplina de Objetos Inteligentes Conectados da Universidade Presbiteriana Mackenzie.

---

# 🖼️ Imagens do Projeto

## 📷 Circuito Físico

<!-- Inserir imagem do circuito físico -->

<p align="center">
  <img src="" width="700">
</p>

---

## 💻 Simulação no Wokwi

<!-- Inserir print da simulação -->

<p align="center">
  <img src="" width="700">
</p>

---

## 🔄 Fluxo Node-RED

<!-- Inserir print do fluxo Node-RED -->

<p align="center">
  <img src="" width="700">
</p>

---

## 📊 Dashboard Grafana

<!-- Inserir print do dashboard -->

<p align="center">
  <img src="" width="700">
</p>

---

## 📱 Notificações WhatsApp

<!-- Inserir print das notificações -->

<p align="center">
  <img src="" width="500">
</p>

---

# 🎯 Objetivos

* Monitorar temperatura em tempo real;
* Detectar variações térmicas críticas;
* Reduzir perdas na cadeia de frio;
* Permitir acompanhamento remoto;
* Gerar dashboards gerenciais;
* Enviar alertas automáticos via WhatsApp;
* Demonstrar integração completa de uma arquitetura IoT.

---

# 🌍 Objetivos de Desenvolvimento Sustentável (ODS)

O projeto está alinhado aos seguintes ODS da ONU:

* **ODS 2 — Fome Zero e Agricultura Sustentável**
* **ODS 3 — Saúde e Bem-Estar**

---

# 🛠️ Tecnologias Utilizadas

## Hardware

* ESP32
* Sensor DHT22
* Protoboard
* Jumpers
* Fonte USB 5V

## Software e Serviços

* Arduino IDE
* MQTT
* Node-RED
* InfluxDB
* Grafana
* WhatsApp API
* Wokwi

---

# 📂 Estrutura do Repositório

```bash id="5lx13m"
iot-temperature-monitoring/
│
├── esp32/
│   └── Código fonte do ESP32 em C/C++
│
├── node-red/
│   └── Fluxos Node-RED em JSON
│
├── mqtt/
│   └── Configurações MQTT
│
├── influxdb/
│   └── Estrutura do banco de dados
│
├── grafana/
│   └── Dashboards Grafana
│
├── circuit/
│   └── Diagramas elétricos
│
├── wokwi/
│   └── Simulações e imagens
│
├── images/
│   └── Capturas de tela
│
├── docs/
│   └── Documentação técnica
│
├── article/
│   └── Artigo acadêmico
│
├── README.md
├── LICENSE
└── .gitignore
```

---

# 🔌 Arquitetura do Sistema

```text id="n38e2o"
ESP32 + DHT22
       ↓
     MQTT
       ↓
   Node-RED
       ↓
    InfluxDB
       ↓
    Grafana
       ↓
 WhatsApp API
```

---

# ⚙️ Como Executar o Projeto

## 1. Montagem do Circuito

Conecte o sensor DHT22 ao ESP32:

| DHT22 | ESP32  |
| ----- | ------ |
| VCC   | 3.3V   |
| GND   | GND    |
| DATA  | GPIO 4 |

Utilize resistor pull-up de 10kΩ entre DATA e VCC.

---

## 2. Configurar Arduino IDE

Instale as bibliotecas:

* DHT Sensor Library
* WiFi.h
* PubSubClient
* ArduinoJson

Configure:

* SSID da rede Wi-Fi;
* Senha da rede;
* Endereço do broker MQTT.

---

## 3. Configurar Broker MQTT

Pode ser utilizado:

* HiveMQ;
* Mosquitto;
* Broker Linux local.

Exemplo de tópico MQTT:

```bash id="snsv7e"
temperature/monitoring
```

---

## 4. Importar Fluxos Node-RED

1. Abra o Node-RED;
2. Vá em:

   * Menu → Import;
3. Importe o arquivo:

```bash id="jlwmfc"
node-red/flows.json
```

---

# 5. Configurar InfluxDB

Criar:

* Bucket;
* Token;
* Organização.

Arquivos disponíveis em:

```bash id="1jw0vh"
influxdb/
```

---

# 6. Configurar Grafana

1. Adicione o InfluxDB como Data Source;
2. Importe os dashboards localizados em:

```bash id="2th8sj"
grafana/
```

---

# 7. Configurar API WhatsApp

Configure:

* Token da API;
* Número de destino;
* Endpoint HTTP no Node-RED.

⚠️ Nunca publique credenciais, tokens ou números pessoais no repositório.

---

# 📊 Dashboards

Os dashboards permitem:

* Visualização da temperatura em tempo real;
* Histórico de medições;
* Alertas críticos;
* Estatísticas de funcionamento;
* Monitoramento remoto completo.

---

# 🧪 Testes e Simulações

O sistema pode ser executado:

* em hardware físico;
* ou utilizando simulações no Wokwi.

As imagens e evidências dos testes estão disponíveis na pasta:

```bash id="cxmn6z"
wokwi/
```

---

# 📚 Bibliotecas Utilizadas

* DHT Sensor Library
* PubSubClient
* WiFi.h
* ArduinoJson

---

# 👨‍💻 Integrantes

* Guilherme Shinohara
* Kauã Alencar

---

# 📄 Licença

Projeto desenvolvido para fins acadêmicos e educacionais.
