# Prevenção de Perdas na Cadeia de Frio: IoT para Monitoramento de Temperatura com WhatsApp API

## Descrição

Este projeto utiliza Internet das Coisas (IoT) para monitoramento de temperatura em ambientes de cadeia de frio utilizando ESP32, sensor DHT22, protocolo MQTT, Node-RED, InfluxDB e Grafana.

O sistema realiza a coleta contínua de temperatura e umidade, enviando os dados para monitoramento em tempo real através de dashboards e geração de alertas via API do WhatsApp em situações críticas.

---

## Objetivos do Projeto

- Monitorar temperatura em tempo real;
- Reduzir perdas na cadeia de frio;
- Gerar alertas automáticos;
- Armazenar dados históricos;
- Disponibilizar dashboards para visualização;
- Simular o sistema utilizando Wokwi.

---

## Tecnologias Utilizadas

- ESP32
- Sensor DHT22
- MQTT
- Node-RED
- InfluxDB
- Grafana
- Wokwi
- WhatsApp API

---

## Componentes Utilizados

- ESP32 DevKit V1
- Sensor DHT22
- Cabos jumper
- Protoboard
- Fonte USB

---

## Arquitetura do Repositório

```text
monitoramento-cadeia-frio-iot/
│
├── README.md                  # Documentação principal do projeto
├── LICENSE                    # Licença do projeto
├── .gitignore                 # Arquivos ignorados pelo Git
│
├── esp32/                     # Código-fonte do ESP32
│   ├── sketch.ino
│   ├── diagram.json
│   └── bibliotecas.txt
│
├── node-red/                  # Fluxos de automação Node-RED
│   └── fluxos.json
│
├── grafana/                   # Dashboard de monitoramento
│   ├── dashboard.json
│   └── dashboard.png
│
├── mqtt/                      # Configuração e tópicos MQTT
│   └── topicos-mqtt.md
│
├── docs/                      # Documentação técnica
│   ├── instalacao.md
│   ├── arquitetura.md
│   └── testes.md
│
├── circuito/                  # Circuito elétrico e componentes
│   ├── diagrama-ligacao.png
│   └── lista-componentes.md
│
├── wokwi/                     # Simulação do projeto
│   ├── link-simulacao.md
│   └── simulacao-wokwi.png
│
└── imagens/                   # Imagens utilizadas no README
    ├── visao-geral-sistema.png
    └── preview-dashboard.png
```

---

## Esquema do Circuito

<!-- Adicionar imagem do circuito aqui -->

---

## Dashboard Grafana

<!-- Adicionar imagem do dashboard aqui -->

---

## Simulação no Wokwi

<!-- Adicionar imagem da simulação aqui -->

Link da simulação:
[Adicionar link do Wokwi aqui]

---

## Instalação e Execução

### 1. Clone o repositório

```bash
git clone https://github.com/seu-usuario/monitoramento-cadeia-frio-iot.git
```

### 2. Configure o ESP32

- Instale a Arduino IDE;
- Instale as bibliotecas necessárias;
- Configure Wi-Fi e MQTT;
- Faça upload do código para o ESP32.

### 3. Execute o Node-RED

- Importe o arquivo `flows.json`;
- Configure o broker MQTT;
- Configure os fluxos de monitoramento.

### 4. Configure o InfluxDB

- Crie o banco de dados;
- Configure as medições;
- Integre com Node-RED.

### 5. Configure o Grafana

- Importe o dashboard JSON;
- Configure a fonte de dados;
- Visualize os dados em tempo real.

---

## Funcionalidades

- Monitoramento de temperatura e umidade;
- Dashboard em tempo real;
- Armazenamento histórico;
- Alertas automáticos;
- Simulação virtual do sistema;
- Integração com WhatsApp API.

---

## Autor

Guilherme Shinohara

---

## Licença

Este projeto possui licença para visualização e reprodução acadêmica, sem autorização para modificação ou uso comercial.
