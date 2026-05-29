# Sistema Online de Monitoramento de Cadeia de Frio com IoT e Alertas via WhatsApp

---

## Visão Geral

Este projeto implementa um **sistema online de Internet das Coisas (IoT)** aplicado ao monitoramento de cadeia de frio, com foco na prevenção de perdas de produtos sensíveis à temperatura, como alimentos, vacinas e medicamentos.

O sistema foi **desenvolvido em ambiente online**, utilizando ESP32 e sensor DHT22 em ambiente de simulação, com comunicação em rede via MQTT e processamento em tempo real com Node-RED, InfluxDB e Grafana.

Em caso de variações críticas de temperatura, o sistema gera alertas automáticos via WhatsApp API.

---

## 🎥 Vídeo de Apresentação

Assista à explicação completa do projeto:

[![Apresentação do Projeto](https://img.youtube.com/vi/0jvnXD7V_uU/0.jpg)](https://www.youtube.com/watch?v=0jvnXD7V_uU&t=170s)

> Clique na imagem para assistir no YouTube.

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
    │   
│   └── dashboard.jpeg
│
├── mqtt/
│   └── topics.md
│
├── influxdb/
│   └── setup.md
│
│
├── wokwi/
    └── simulacao.md
```

---

## Simulação Online do Sistema

O sistema foi desenvolvido em ambiente online utilizando o Wokwi para simular o funcionamento do ESP32 e do sensor DHT22.

O ESP32 realiza a leitura do sensor DHT22 simulado e transmite os dados via rede Wi-Fi para o broker MQTT.

<img width="1026" height="466" alt="image" src="https://github.com/user-attachments/assets/5d2246bd-4ef3-4b33-865e-e7fd10bf3703" />

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

### 1. Node-RED — Fluxo de Processamento de Dados

Fluxo configurado no Node-RED responsável por receber as mensagens MQTT publicadas pelo ESP32, processar os dados de temperatura e umidade, acionar os alertas via WhatsApp e encaminhar as leituras ao InfluxDB para armazenamento.

<img width="877" height="304" alt="Node red" src="https://github.com/user-attachments/assets/bfc974e2-71d5-4179-8075-627113284f76" />

---

### 2. InfluxDB — Armazenamento das Leituras

Interface do InfluxDB exibindo os dados de temperatura e umidade armazenados ao longo do tempo. Cada registro corresponde a uma leitura enviada pelo ESP32 via MQTT, permitindo consulta e análise histórica das variações da cadeia de frio.

<img width="1600" height="659" alt="Influx" src="https://github.com/user-attachments/assets/2973c88c-c231-44ba-8112-c7f76bde9818" />

---

### 3. Grafana — Dashboard de Monitoramento

Dashboard do Grafana com visualização em tempo real das métricas coletadas. Apresenta gráficos de temperatura e umidade com histórico de leituras, possibilitando identificar rapidamente variações críticas e acompanhar o comportamento do ambiente monitorado.

<img width="1600" height="592" alt="Grafana" src="https://github.com/user-attachments/assets/ced313fc-3dd7-41d7-afa3-847b54b6deb5" />

---

### 4. WhatsApp — Alertas Automáticos em Tempo Real

Notificações enviadas automaticamente via WhatsApp API (Callmebot) sempre que a temperatura ultrapassa o limite crítico configurado. As mensagens são disparadas pelo Node-RED e entregues em tempo real, garantindo resposta imediata a situações de risco na cadeia de frio.

<img width="1600" height="1296" alt="image" src="https://github.com/user-attachments/assets/9be5a6c1-e09f-4760-af9b-82bfdb926e19" />


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

Guilherme Shinohara

Thiago Kaua Amaral

Kauan Sarzi

Kaua Alencar

## Orientado por: Prof. Wallace Rodrigues de Santana Universidade Presbiteriana Mackenzie — FCI
