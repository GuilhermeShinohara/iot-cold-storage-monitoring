```md
# Tópicos MQTT - Monitoramento de Equipamentos de Refrigeração

## 📌 Contexto

Este projeto utiliza MQTT para monitoramento de equipamentos de refrigeração com **um único sensor por unidade**, incluindo:

- Geladeiras
- Freezers
- Câmaras frias

Aplicado para armazenamento de **alimentos e insumos médicos**, garantindo controle de temperatura e detecção de falhas em tempo real.

---

## 🏗️ Arquitetura

```

Sensor IoT (ESP32) → Broker MQTT → Sistema de Monitoramento

```

- **Sensor IoT**: coleta temperatura e status
- **Broker MQTT**: centraliza e distribui mensagens
- **Sistema de monitoramento**: dashboards e alertas

---

## 📡 Estrutura de Tópicos

Padrão utilizado:

```

refrigeracao/{tipo}/{dado}

```

### Exemplos:

```

refrigeracao/geladeira/temperatura
refrigeracao/geladeira/status

refrigeracao/freezer/temperatura
refrigeracao/freezer/status

refrigeracao/camara/temperatura
refrigeracao/camara/status

````

---

## 📊 Tipos de Dados (Payload)

### Temperatura

```json
{
  "valor": 4.2,
  "unidade": "C",
  "timestamp": "2026-05-26T21:00:00Z"
}
````

---

### Status do equipamento

```json
{
  "estado": "ok",
  "energia": "ligado"
}
```

---

### Alerta

```json
{
  "tipo": "temperatura_alta",
  "valor": 9.5,
  "limite": 8.0,
  "mensagem": "Temperatura fora do limite seguro"
}
```

---

## 🚨 Tópicos de Alertas

```
refrigeracao/geladeira/alerta
refrigeracao/freezer/alerta
refrigeracao/camara/alerta
```

---

## 🔎 Assinaturas (Wildcards)

### Todos os sensores de temperatura:

```
refrigeracao/+/temperatura
```

### Tudo do sistema:

```
refrigeracao/#
```

---

## ⚙️ Qualidade de Serviço (QoS)

* **QoS 0** → Telemetria contínua (temperatura)
* **QoS 1** → Alertas críticos (garantia de entrega)
* **QoS 2** → Não necessário neste cenário

---

## 💾 Retained Messages

Utilizado para armazenar o último estado conhecido:

* Última temperatura registrada
* Último status do equipamento

Isso garante que novos clientes recebam imediatamente o estado atual.

---

## 📈 Aplicação

Este modelo permite:

* Monitoramento em tempo real
* Controle de cadeia fria (cold chain)
* Uso em ambientes médicos e alimentícios
* Integração com dashboards (Grafana, etc.)
* Envio de alertas automáticos (WhatsApp, e-mail)

---

