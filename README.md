# ❄️ Cold Chain IoT Monitoring System  
## Prevenção de Perdas na Cadeia de Frio com IoT, MQTT e Alertas via WhatsApp

---

## 📌 Visão Geral

Este projeto implementa um sistema completo de monitoramento inteligente de cadeia de frio utilizando Internet das Coisas (IoT), com foco na prevenção de perdas de produtos sensíveis à temperatura, como alimentos, vacinas e medicamentos.

O sistema realiza a coleta contínua de dados ambientais por meio de um ESP32 com sensor DHT22, transmitindo informações via MQTT para uma arquitetura de processamento em tempo real baseada em Node-RED, InfluxDB e Grafana.

Em caso de condições críticas, o sistema gera alertas automáticos via WhatsApp API.

---

## 🎯 Objetivos

- Monitorar temperatura e umidade em tempo real  
- Garantir rastreabilidade de condições ambientais  
- Reduzir perdas na cadeia de frio  
- Gerar alertas automáticos inteligentes  
- Armazenar histórico de dados para análise  
- Visualizar informações em dashboards interativos  
- Validar o sistema por simulação com Wokwi  

---

## 🧠 Arquitetura do Sistema

ESP32 (DHT22) → MQTT Broker → Node-RED → InfluxDB → Grafana → WhatsApp API Alerts  

![Arquitetura do Sistema](imagens/visao-geral-sistema.png)

---

## 🧰 Tecnologias Utilizadas

### Hardware
- ESP32 DevKit V1  
- Sensor DHT22  
- Protoboard e jumpers  

### Software
- MQTT  
- Node-RED  
- InfluxDB  
- Grafana  
- Wokwi  
- WhatsApp API  
- Arduino IDE  

---

## 📁 Estrutura do Repositório

```
cold-chain-iot-monitoring/
│
├── README.md
├── LICENSE
├── .gitignore
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
│   ├── simulacao.png
│   └── link.md
│
└── imagens/
    ├── visao-geral-sistema.png
    ├── preview-dashboard.png
    └── node-red-flow.png
```

---

## 📊 Dashboard Grafana

![Dashboard](imagens/preview-dashboard.png)

---

## 🔄 Node-RED Flow

![Node-RED](imagens/node-red-flow.png)

---

## ⚡ Circuito ESP32

![Circuito](circuito/diagrama-ligacao.png)

---

## 🧪 Simulação Wokwi

Leitura simulada de sensores, publicação MQTT e validação completa do fluxo do sistema.

Link: COLOCAR_LINK_AQUI  

---

## ⚙️ Instalação

```bash
git clone https://github.com/seu-usuario/cold-chain-iot-monitoring.git
cd cold-chain-iot-monitoring
```

### ESP32
Instalar Arduino IDE, bibliotecas WiFi, PubSubClient e DHT sensor library, configurar Wi-Fi e MQTT e fazer upload do código.

### Node-RED
Importar flows.json, configurar broker MQTT e fazer deploy.

### InfluxDB
Criar database e configurar measurements.

### Grafana
Adicionar InfluxDB como data source e importar dashboard.

---

## 🚨 Alertas

O sistema monitora continuamente os dados e, quando a temperatura ultrapassa limites definidos, o Node-RED dispara automaticamente alertas via WhatsApp API, além de registrar os eventos no InfluxDB e atualizar o dashboard em tempo real.

---

## 📌 Funcionalidades

- Monitoramento IoT em tempo real  
- Comunicação MQTT  
- Dashboard interativo  
- Histórico de dados  
- Alertas automáticos  
- Integração com WhatsApp  
- Simulação com Wokwi  

---

## 👨‍💻 Autor

Guilherme Shinohara  

---

## 🎓 Finalidade

Projeto acadêmico voltado à aplicação de IoT em monitoramento de cadeia de frio.

---

## 📄 Licença

Uso exclusivamente acadêmico e educacional.
