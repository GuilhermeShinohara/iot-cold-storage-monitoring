```md
# Tópicos MQTT - Monitoramento de Equipamentos de Refrigeração

## 1. Contexto do Sistema

Este sistema utiliza MQTT para monitoramento de equipamentos de refrigeração com um único sensor por unidade, como:

- Geladeiras
- Freezers
- Câmaras frias

Aplicado tanto para armazenamento de alimentos quanto insumos médicos.

O objetivo é garantir controle de temperatura e detecção de falhas em tempo real.

---

## 2. Arquitetura MQTT

- **Sensor IoT (ESP32 + sensor de temperatura)** → Publica dados
- **Broker MQTT** → Centraliza mensagens
- **Sistema de monitoramento (dashboard / alertas)** → Consome dados

Fluxo:

```

Sensor → Broker MQTT → Sistema de Monitoramento

```

---

## 3. Estrutura de Tópicos

Como há apenas um sensor por equipamento, a estrutura é simples e padronizada:

```

refrigeracao/geladeira/temperatura
refrigeracao/geladeira/status

refrigeracao/freezer/temperatura
refrigeracao/freezer/status

refrigeracao/camara/temperatura
refrigeracao/camara/status

```

---

## 4. Padrão de Organização

Formato geral:

```

refrigeracao/{tipo}/{dado}

```

Onde:

- `tipo` = geladeira | freezer | camara
- `dado` = temperatura | status | alerta

---

## 5. Payload das Mensagens

### Temperatura
```

{
"valor": 4.2,
"unidade": "C",
"timestamp": "2026-05-26T21:00:00Z"
}

```

---

### Status do equipamento
```

{
"estado": "ok",
"energia": "ligado"
}

```

---

### Alerta (quando necessário)
```

{
"tipo": "temperatura_alta",
"valor": 9.5,
"limite": 8.0,
"mensagem": "Temperatura fora do limite seguro"
}

```

---

## 6. Tópicos de Alerta

```

refrigeracao/geladeira/alerta
refrigeracao/freezer/alerta
refrigeracao/camara/alerta

```

---

## 7. Assinatura com Wildcards

### Todos os equipamentos:
```

refrigeracao/+/temperatura

```

### Todos os dados do sistema:
```

refrigeracao/#

```

---

## 8. Qualidade de Serviço (QoS)

- **QoS 0** → Temperatura em tempo real (envio contínuo)
- **QoS 1** → Alertas (garantia de entrega)
- **QoS 2** → Não necessário neste cenário simples

---

## 9. Retained Messages

Usado para manter:

- Última temperatura registrada
- Último status do equipamento

Isso permite que o sistema já inicie com o último estado conhecido.

---

## 10. Aplicação no Projeto

Esse modelo permite:

- Monitoramento simples e escalável
- Uso em ambientes médicos e alimentícios
- Detecção de falhas térmicas
- Integração com alertas (ex: WhatsApp, e-mail, dashboard)
- Baixo consumo de rede e processamento

---

## 11. Conclusão

A estrutura MQTT foi simplificada para um cenário com um sensor por equipamento, garantindo leveza, clareza e facilidade de expansão futura para múltiplas unidades.
```
