# Projeto Drone — Diário de Estudos

> **Objetivo:** Construir um drone do zero usando C (hardware) e Python (inteligência)
> **Início:** Mai/2026 | **Nível:** Iniciante → Avançado

---

## 📊 Progresso Geral

| Fase | Status | Conteúdo |
|------|--------|----------|
| Fase 1 — Fundamentos | ✅ Concluída | C básico + Python + OpenCV |
| Fase 2 — Hardware | 🔄 Em andamento | Arduino + Simulador + PWM |
| Fase 3 — Comunicação | ⏳ Pendente | Serial + I2C + MPU-6050 |
| Fase 4 — Montagem | ⏳ Pendente | Drone físico completo |

---

## ✅ Fase 1 — Fundamentos (Concluída)

### ⚙️ C — Linguagem de Hardware

#### Variáveis e Tipos
- `int` — números inteiros
- `float` — números decimais
- `char` — caractere único
- `const` — valor somente leitura com tipo
- `#define` — substituição sem tipo, sem memória

#### Controle de Fluxo
- `if / else if / else` — decisões
- `while` — loop com condição dupla
- `for` — loop com início, condição e incremento
- `break` — para o loop imediatamente
- `i++` / `i--` / `i += 10` — incremento e decremento

#### Entrada e Saída
- `printf` com `%d`, `%.2f`, `%c`, `%%`, `\n`
- `scanf` com `&variavel`

#### Estruturas de Dados
- Arrays — declarar, acessar, modificar
- Buffer overflow — por que `i < 4` e não `i <= 4`

#### Funções
| Tipo | Sintaxe | Descrição |
|------|---------|-----------|
| Sem parâmetro, sem retorno | `void f()` | Só executa |
| Com parâmetro, sem retorno | `void f(param)` | Recebe dado |
| Sem parâmetro, com retorno | `int f()` | Devolve valor |
| Com parâmetro, com retorno | `float f(p1, p2)` | Recebe e devolve |

#### Escopo de Variáveis
- **Local** — nasce e morre dentro da função
- **Global** — todas as funções enxergam e modificam

#### Projetos C Concluídos
- ✅ Simulador de voo — subida e descida com while
- ✅ Sistema de 4 motores com array
- ✅ Sistema de monitoramento com funções
- ✅ Configuração do drone com const e #define
- ✅ Relatório interativo com scanf

---

### Python — Linguagem de Inteligência

#### Fundamentos
- Variáveis sem declarar tipo
- `if / elif / else`
- Funções com `def`, parâmetros e valor padrão
- f-strings para formatar saída — `f"Altitude: {altitude}m"`

#### OpenCV — Visão Computacional
- `cv2.VideoCapture(0)` — abre câmera
- `camera.read()` — captura frame
- `cv2.imshow()` — mostra imagem
- `cv2.putText()` — escreve texto na tela
- `cv2.line()` — desenha linha
- `frame.shape` — tamanho do frame
- `cv2.waitKey(1)` — detecta tecla
- `camera.release()` — libera câmera

#### Projetos Python Concluídos
- ✅ Sistema de status do drone com funções
- ✅ Verificador de bateria
- ✅ Câmera ao vivo com OpenCV
- ✅ HUD completo — altitude, bateria, status, mira

---

## 🔄 Fase 2 — Hardware (Em andamento)

### Arduino Uno — Simulador Tinkercad

#### Estrutura
```cpp
void setup() {
    // Configuração — roda uma vez
}
void loop() {
    // Loop infinito — roda para sempre
}
```

#### Funções Aprendidas
| Função | Descrição |
|--------|-----------|
| `pinMode(pino, OUTPUT)` | Define pino como saída |
| `digitalWrite(pino, HIGH/LOW)` | Liga ou desliga LED |
| `analogWrite(pino, 0-255)` | PWM — controle de brilho/velocidade |
| `delay(ms)` | Pausa em milissegundos |
| `Serial.begin(9600)` | Inicia comunicação serial |
| `Serial.println("msg")` | Imprime mensagem no monitor |

#### Pinos PWM do Arduino Uno


#### Conceitos de Hardware
- **Anodo (+)** → perna maior → pino do Arduino
- **Catodo (-)** → perna menor → resistor → GND
- **Resistor 220Ω** → protege o LED de queimar
- **Protoboard** → linha GND compartilhada
- **PWM** → liga/desliga rápido para simular velocidade variável

#### Projetos Arduino Concluídos
- ✅ Blink — LED piscando
- ✅ Animação com 5 LEDs — ida e volta
- ✅ PWM com 1 LED — brilho suave
- ✅ PWM com 4 LEDs — simulação de 4 motores
- ✅ Semáforo do drone — Serial Monitor

---

## ⏳ Próximos Passos

### Fase 2 — Restante