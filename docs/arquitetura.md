# 🏗️ Arquitetura do Sistema IoT - Monitoramento de Cadeia de Frio

## 📌 Visão Geral

O sistema foi projetado como uma arquitetura IoT distribuída para monitoramento de temperatura e umidade em tempo real, utilizando comunicação baseada em MQTT e integração com serviços de processamento, armazenamento e visualização de dados.

A arquitetura segue um modelo em camadas, permitindo escalabilidade, modularidade e fácil reprodução do sistema.

---

## 🔄 Arquitetura Geral

```mermaid
flowchart LR

A[ESP32 + DHT22] --> B[Broker MQTT]
B --> C[Node-RED]
C --> D[InfluxDB]
C --> E[Grafana Dashboard]
C --> F[WhatsApp API]

D --> E
