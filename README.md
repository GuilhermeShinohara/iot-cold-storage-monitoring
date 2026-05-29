# Cold Chain IoT Monitoring System

## Sistema Online de Monitoramento de Cadeia de Frio com IoT e Alertas via WhatsApp

---

## Visão Geral

Este projeto implementa um **sistema online de Internet das Coisas (IoT)** aplicado ao monitoramento de cadeia de frio, com foco na prevenção de perdas de produtos sensíveis à temperatura, como alimentos, vacinas e medicamentos.

O sistema foi **desenvolvido em ambiente online**, utilizando ESP32 e sensor DHT22 em ambiente de simulação, com comunicação em rede via MQTT e processamento em tempo real com Node-RED, InfluxDB e Grafana.

Em caso de variações críticas de temperatura, o sistema gera alertas automáticos via WhatsApp API.

---

## Natureza do Projeto (Online + IoT)

Este projeto envolve:

* Simulação online de microcontrolador ESP32
* Leitura de sensores em ambiente simulado
* Comunicação IoT em rede
* Sistema de monitoramento em tempo real

---

## Objetivos

* Monitorar temperatura e umidade em ambiente simulado
* Simular cenário de cadeia de frio
* Reduzir perdas por variação térmica
* Gerar alertas automáticos
* Armazenar dados históricos
* Visualizar dados em dashboards
* Integrar simulação online com sistemas IoT

---

## Arquitetura do Sistema

Fluxo de dados:

ESP32 (simulado + DHT22) → MQTT Broker → Node-RED → InfluxDB → Grafana → WhatsApp API Alerts

---

## Tecnologias Utilizadas

### Simulação Online

* ESP32 DevKit V1
* Sensor DHT22
* Wokwi

### Software

* MQTT
* Node-RED
* InfluxDB
* Grafana
* Arduino IDE
* WhatsApp API

---

## Estrutura do Repositório

```text
cold-chain-iot-monitoring/
│
├── esp32/
│   ├── sketch.ino
│   ├── diagram.json
│   └── bibliotecas.txt
│
├── node-red/
│   └── flows.json
│
├── grafana/
│   ├── dashboard.json
│   └── dashboard.png
│
├── mqtt/
│   └── topics.md
│
├── influxdb/
│   └── setup.md
│
├── circuito/
│   ├── diagrama-ligacao.png
│   └── lista-componentes.md
│
├── wokwi/
│   └── simulacao.md
│
└── imagens/
    ├── visao-geral-sistema.png
    ├── preview-dashboard.png
    └── node-red-flow.png
```

---

## Simulação Online do Sistema

O sistema foi desenvolvido em ambiente online utilizando o Wokwi para simular o funcionamento do ESP32 e do sensor DHT22.

O ESP32 realiza a leitura do sensor DHT22 simulado e transmite os dados via rede Wi-Fi para o broker MQTT.

📌 (Inserir imagem da simulação online aqui)

---

## Guia de Instalação e Execução

### 1. Clonar o repositório

```bash
git clone https://github.com/seu-usuario/cold-chain-iot-monitoring.git
cd cold-chain-iot-monitoring
```

---

### 2. Configurar ESP32 no ambiente online

* Acessar o Wokwi
* Configurar o ESP32
* Configurar o sensor DHT22
* Instalar bibliotecas:

  * WiFi.h
  * PubSubClient
  * DHT sensor library
* Configurar Wi-Fi e MQTT
* Executar a simulação

---

### 3. Node-RED

* Importar flows.json
* Configurar broker MQTT
* Deploy do fluxo

---

### 4. InfluxDB

* Criar database
* Configurar measurements
* Conectar ao Node-RED

---

### 5. Grafana

* Adicionar InfluxDB
* Importar dashboard
* Visualizar dados

---

## Sistema de Alertas

Quando a temperatura ultrapassa limites definidos:

* ESP32 envia dados em tempo real
* Node-RED processa informações
* WhatsApp API envia alerta automático
* InfluxDB registra eventos
* Grafana atualiza dashboards

---

## Interface do Sistema

![Dashboard](imagens/preview-dashboard.png)
![Node-RED](imagens/node-red-flow.png)

---

## Funcionalidades

* Sistema online de IoT
* Monitoramento em tempo real
* Comunicação MQTT
* Visualização em dashboard
* Histórico de dados
* Alertas automáticos
* Integração com WhatsApp API

---

## Autores

Guilherme Shinohara,
Thiago Kaua Amaral,
Kauan Sarzi,
Kaua Alencar.

---

## Finalidade

Projeto acadêmico online desenvolvido para demonstrar aplicação de IoT no monitoramento de cadeia de frio.

---

## Licença

Este projeto é destinado exclusivamente para fins acadêmicos e educacionais.
