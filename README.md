# ❄️ Cold Chain IoT Monitoring System  
## Sistema Físico de Monitoramento de Cadeia de Frio com IoT e Alertas via WhatsApp

---

## 📌 Visão Geral

Este projeto implementa um **sistema físico real de Internet das Coisas (IoT)** aplicado ao monitoramento de cadeia de frio, com foco na prevenção de perdas de produtos sensíveis à temperatura, como alimentos, vacinas e medicamentos.

O sistema foi **construído em hardware físico**, utilizando ESP32 e sensor DHT22 em ambiente de prototipagem eletrônica, com comunicação em rede via MQTT e processamento em tempo real com Node-RED, InfluxDB e Grafana.

Em caso de variações críticas de temperatura, o sistema gera alertas automáticos via WhatsApp API.

---

## 🧪 Natureza do Projeto (Físico + IoT)

Este projeto NÃO é apenas simulação. Ele envolve:

- Montagem física em protoboard  
- Uso de microcontrolador ESP32 real  
- Leitura de sensores em ambiente físico  
- Comunicação IoT em rede  
- Sistema de monitoramento em tempo real  

---

## 🎯 Objetivos

- Monitorar temperatura e umidade em ambiente físico real  
- Simular cenário de cadeia de frio  
- Reduzir perdas por variação térmica  
- Gerar alertas automáticos  
- Armazenar dados históricos  
- Visualizar dados em dashboards  
- Integrar hardware físico com sistemas IoT  

---

## 🧠 Arquitetura do Sistema

Fluxo de dados:

ESP32 (físico + DHT22) → MQTT Broker → Node-RED → InfluxDB → Grafana → WhatsApp API Alerts  

📌 Arquitetura visual:

![Arquitetura do Sistema](imagens/visao-geral-sistema.png)

---

## 🧰 Tecnologias Utilizadas

### 🔩 Hardware (Físico)
- ESP32 DevKit V1  
- Sensor DHT22  
- Protoboard  
- Jumpers  
- Cabo USB  

### 💻 Software
- MQTT  
- Node-RED  
- InfluxDB  
- Grafana  
- Arduino IDE  
- WhatsApp API  
- Wokwi (apenas validação opcional)

---

## 📁 Estrutura do Repositório

```
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

## 🔧 Montagem Física do Sistema

O sistema foi montado fisicamente utilizando protoboard e componentes eletrônicos reais.

O ESP32 realiza a leitura direta do sensor DHT22 e transmite os dados via rede Wi-Fi para o broker MQTT.

📌 (Inserir foto da montagem física aqui)

---

## 🚀 Guia de Instalação e Execução

### 1. Clonar o repositório

```bash
git clone https://github.com/seu-usuario/cold-chain-iot-monitoring.git
cd cold-chain-iot-monitoring
```

---

### 2. Configurar ESP32 (hardware físico)

- Instalar Arduino IDE  
- Instalar suporte ESP32  
- Instalar bibliotecas:
  - WiFi.h  
  - PubSubClient  
  - DHT sensor library  
- Montar circuito físico:
  - ESP32 + DHT22 em protoboard  
- Configurar Wi-Fi e MQTT  
- Fazer upload do código  

---

### 3. Node-RED

- Importar flows.json  
- Configurar broker MQTT  
- Deploy do fluxo  

---

### 4. InfluxDB

- Criar database  
- Configurar measurements  
- Conectar ao Node-RED  

---

### 5. Grafana

- Adicionar InfluxDB  
- Importar dashboard  
- Visualizar dados  

---

## 🚨 Sistema de Alertas

Quando a temperatura ultrapassa limites definidos:

- ESP32 envia dados em tempo real  
- Node-RED processa informações  
- WhatsApp API envia alerta automático  
- InfluxDB registra eventos  
- Grafana atualiza dashboards  

---

## 📊 Interface do Sistema

![Dashboard](imagens/preview-dashboard.png)  
![Node-RED](imagens/node-red-flow.png)

---

## 📌 Funcionalidades

- Sistema físico de IoT  
- Monitoramento em tempo real  
- Comunicação MQTT  
- Visualização em dashboard  
- Histórico de dados  
- Alertas automáticos  
- Integração com WhatsApp API  

---

## 👨‍💻 Autor

Guilherme Shinohara  

---

## 🎓 Finalidade

Projeto acadêmico físico desenvolvido para demonstrar aplicação real de IoT no monitoramento de cadeia de frio.

---

## 📄 Licença

Este projeto é destinado exclusivamente para fins acadêmicos e educacionais.
