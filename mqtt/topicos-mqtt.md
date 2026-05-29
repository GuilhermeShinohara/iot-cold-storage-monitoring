# 📡 Tópicos MQTT — Sistema de Monitoramento de Cadeia Fria

## 📌 Visão Geral

Este projeto utiliza o protocolo MQTT para monitoramento em tempo real de temperatura em equipamentos de refrigeração utilizando ESP32 e sensor DHT22.

O sistema foi desenvolvido para aplicações de cadeia fria (*cold chain*), permitindo monitoramento contínuo e geração de alertas automáticos.

---

# 🏗️ Arquitetura do Sistema

```text id="n7q2lv"
ESP32 + DHT22
        ↓
Broker MQTT (HiveMQ)
        ↓
Node-RED / Sistema de Monitoramento
        ├──→ InfluxDB (armazenamento)
        ├──→ Grafana (dashboards)
        └──→ API WhatsApp (alertas)
                    ↓
               Usuário Responsável
```

---

# 📡 Broker MQTT Utilizado

```text id="d8h4s1"
broker.hivemq.com
```

Porta utilizada:

```text id="w2m7ka"
1883
```

---

# 📂 Tópico MQTT Utilizado

```text id="z9x5pc"
coldchain/temperatura
```

Este tópico é responsável pelo envio dos dados de temperatura coletados pelo ESP32.

---

# 📊 Estrutura do Payload

## Payload de Temperatura

```json id="j3k8tr"
{
  "temperatura": 4.2
}
```

---

# 🔎 Assinatura MQTT

## Escutar dados de temperatura

```text id="x5q8vu"
coldchain/temperatura
```

---

# ⚙️ QoS Utilizado

| QoS   | Finalidade                   |
| ----- | ---------------------------- |
| QoS 0 | Envio contínuo de telemetria |

---

# 💾 Retained Messages

Mensagens retidas podem ser utilizadas para manter o último valor conhecido de temperatura disponível para novos clientes conectados.

---

# 📈 Funcionalidades

* Monitoramento em tempo real
* Integração com Node-RED
* Armazenamento no InfluxDB
* Dashboards no Grafana
* Alertas automáticos via WhatsApp

---

# 🛠️ Tecnologias Utilizadas

* ESP32
* DHT22
* MQTT
* HiveMQ
* Node-RED
* InfluxDB
* Grafana

---

# 📄 Fluxo de Funcionamento

```text id="g8w2kt"
ESP32 lê temperatura do DHT22
        ↓
Publica no tópico:
coldchain/temperatura
        ↓
Broker HiveMQ recebe a mensagem
        ↓
Node-RED processa os dados
        ↓
InfluxDB armazena as informações
        ↓
Grafana atualiza os dashboards
        ↓
WhatsApp envia alertas automáticos
```

---
