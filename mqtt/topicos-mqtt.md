Aqui está a versão em português, mais profissional e pronta para o GitHub:

# 📡 Tópicos MQTT — Sistema de Monitoramento de Cadeia Fria

## 📌 Visão Geral

Este projeto utiliza o protocolo MQTT para monitoramento em tempo real de equipamentos de refrigeração utilizando dispositivos IoT baseados em ESP32.

A solução foi desenvolvida para monitoramento de cadeia fria (*cold chain*) em ambientes como:

* Geladeiras
* Freezers
* Câmaras frias

O sistema pode ser aplicado em:

* Armazenamento de alimentos
* Insumos médicos
* Vacinas e produtos farmacêuticos

O objetivo é garantir controle de temperatura, detectar falhas rapidamente e gerar alertas automáticos em situações críticas.

---

# 🏗️ Arquitetura do Sistema

```text
ESP32 + Sensor → Broker MQTT → Plataforma de Monitoramento
```

## Componentes

### ESP32 + Sensor

Responsável por:

* Ler dados de temperatura
* Detectar status do equipamento
* Publicar mensagens MQTT

### Broker MQTT

Responsável por:

* Receber mensagens dos dispositivos
* Gerenciar assinaturas de tópicos
* Distribuir dados para os sistemas conectados

### Plataforma de Monitoramento

Responsável por:

* Dashboards e visualização
* Geração de alertas
* Histórico e análise de dados

---

# 📡 Estrutura dos Tópicos MQTT

Padrão utilizado:

```text
refrigeracao/{tipo}/{dado}
```

Onde:

| Variável | Descrição               |
| -------- | ----------------------- |
| `{tipo}` | Tipo do equipamento     |
| `{dado}` | Categoria da informação |

---

# 📂 Exemplos de Tópicos

## Geladeira

```text
refrigeracao/geladeira/temperatura
refrigeracao/geladeira/status
refrigeracao/geladeira/alerta
```

## Freezer

```text
refrigeracao/freezer/temperatura
refrigeracao/freezer/status
refrigeracao/freezer/alerta
```

## Câmara Fria

```text
refrigeracao/camara/temperatura
refrigeracao/camara/status
refrigeracao/camara/alerta
```

---

# 📊 Estrutura dos Payloads

## Payload de Temperatura

```json
{
  "valor": 4.2,
  "unidade": "C",
  "timestamp": "2026-05-26T21:00:00Z"
}
```

---

## Payload de Status do Equipamento

```json
{
  "estado": "ok",
  "energia": "ligado"
}
```

---

## Payload de Alerta

```json
{
  "tipo": "temperatura_alta",
  "valor": 9.5,
  "limite": 8.0,
  "mensagem": "Temperatura fora do limite seguro"
}
```

---

# 🚨 Tópicos de Alerta

```text
refrigeracao/geladeira/alerta
refrigeracao/freezer/alerta
refrigeracao/camara/alerta
```

Esses tópicos são utilizados para notificações críticas como:

* Temperatura elevada
* Falha de energia
* Defeito no sensor
* Perda de comunicação

---

# 🔎 Wildcards MQTT

## Assinar todos os sensores de temperatura

```text
refrigeracao/+/temperatura
```

## Assinar todos os tópicos do sistema

```text
refrigeracao/#
```

---

# ⚙️ Níveis de QoS

| QoS   | Utilização                               |
| ----- | ---------------------------------------- |
| QoS 0 | Telemetria contínua                      |
| QoS 1 | Alertas críticos com garantia de entrega |
| QoS 2 | Não necessário neste projeto             |

---

# 💾 Retained Messages

Mensagens retidas (*retained messages*) são utilizadas para armazenar o último estado conhecido do dispositivo.

Exemplos:

* Última temperatura registrada
* Último status do equipamento

Isso permite que novos clientes recebam imediatamente o estado atual do sistema ao se conectarem ao broker MQTT.

---

# 📈 Aplicações do Projeto

Esta arquitetura permite:

* Monitoramento em tempo real
* Controle de cadeia fria (*cold chain*)
* Supervisão de alimentos refrigerados
* Monitoramento de insumos médicos
* Integração com dashboards (Grafana, Node-RED e InfluxDB)
* Envio automático de alertas (WhatsApp, E-mail e Telegram)

---

# 🛠️ Tecnologias Utilizadas

* ESP32
* MQTT
* Node-RED
* InfluxDB
* Grafana
* Sensor DHT22
* HiveMQ / Mosquitto

---

# 📄 Exemplo do Fluxo MQTT

```text
ESP32 realiza leitura da temperatura
        ↓
Publica em:
refrigeracao/freezer/temperatura
        ↓
Broker MQTT recebe a mensagem
        ↓
Node-RED processa os dados
        ↓
Grafana atualiza o dashboard
        ↓
WhatsApp envia alerta se limite for excedido
```

---

# 🚀 Melhorias Futuras

* Múltiplos sensores por equipamento
* Monitoramento de umidade
* Manutenção preditiva
* Detecção de anomalias com IA
* Integração em nuvem
* Aplicativo mobile

---
