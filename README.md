#  Projeto Drone — Diário de Estudos

> **Objetivo:** Construir um drone do zero usando C++ (hardware) e Python (inteligência)
> **Início:** Mai/2026 | **Nível:** Iniciante → Avançado
> **Linguagens:** C++ (microcontrolador) + Python (computador de bordo)

---

## 📊 Progresso Geral

| Fase | Status | Conteúdo |
|------|--------|----------|
| Fase 1 — Fundamentos | ✅ Concluída | C++ básico + Python + OpenCV |
| Fase 2 — Hardware | 🔄 Em andamento | Arduino + Simulador + PWM + Serial |
| Fase 3 — Comunicação | ⏳ Pendente | Serial + I2C + MPU-6050 + Classes C++ |
| Fase 4 — Montagem | ⏳ Pendente | Drone físico completo |

---

## ✅ Fase 1 — Fundamentos (Concluída)

### ⚙️ C++ — Linguagem de Hardware

> Nota: C++ inclui tudo do C + orientação a objetos. O Arduino já usa C++.
> Tudo que foi aprendido em C é válido em C++.

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
- `cout <<` e `cin >>` — forma C++ de entrada/saída
- `Serial.print()` / `Serial.println()` — Arduino

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

#### Projetos C++ Concluídos
- ✅ Simulador de voo — subida e descida com while
- ✅ Sistema de 4 motores com array
- ✅ Sistema de monitoramento com funções
- ✅ Configuração do drone com const e #define
- ✅ Relatório interativo com scanf

---

### 🐍 Python — Linguagem de Inteligência

#### Fundamentos
- Variáveis sem declarar tipo
- `if / elif / else`
- Funções com `def`, parâmetros e valor padrão
- f-strings para formatar saída

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

### 🔌 Arduino Uno — C++ no Hardware

#### Estrutura
```cpp
void setup() { } // Configuração — roda uma vez
void loop()  { } // Loop infinito — roda para sempre
```

#### Funções Aprendidas
| Função | Descrição |
|--------|-----------|
| `pinMode(pino, OUTPUT)` | Define pino como saída |
| `digitalWrite(pino, HIGH/LOW)` | Liga ou desliga LED |
| `analogWrite(pino, 0-255)` | PWM — controle de velocidade |
| `delay(ms)` | Pausa em milissegundos |
| `Serial.begin(9600)` | Inicia comunicação serial |
| `Serial.println("msg")` | Imprime no monitor serial |

#### Pinos PWM do Arduino Uno
```
~3  ~5  ~6  ~9  ~10  ~11
```

#### Projetos Arduino Concluídos
- ✅ Blink — LED piscando
- ✅ Animação com 5 LEDs — ida e volta
- ✅ PWM com 1 LED — brilho suave
- ✅ PWM com 4 LEDs — simulação de 4 motores
- ✅ Semáforo do drone — Serial Monitor
- ✅ Serial — Arduino enviando altitude para Python

---

## 📚 Grade de Exercícios C++ — Aprofundamento

### 🟢 Módulo 1 — C++ vs C (Diferenças Básicas)
> Fase atual — pode começar agora

| # | Exercício | Conceito |
|---|-----------|---------|
| 01 | Reescrever o simulador de voo usando `cout` e `cin` | cout / cin |
| 02 | Criar namespace `Drone` com funções de voo | namespace |
| 03 | Usar `string` em vez de `char[]` para status | std::string |
| 04 | Reescrever o sistema de motores com `vector` | std::vector |
| 05 | Usar `bool` para flags de estado do drone | bool / true / false |

### 🟡 Módulo 2 — Structs e Organização
> Fase 2 — quando terminar o MPU-6050

| # | Exercício | Conceito |
|---|-----------|---------|
| 06 | Criar `struct Motor` com potencia e status | struct |
| 07 | Criar `struct Drone` agrupando altitude, bateria, motores | struct aninhada |
| 08 | Função que recebe e modifica uma struct | passagem por referência |
| 09 | Array de structs — 4 motores com struct Motor | array de structs |
| 10 | Criar `struct Sensor` para dados do MPU-6050 | struct aplicada |

### 🟠 Módulo 3 — Orientação a Objetos Básica
> Fase 3 — comunicação Serial

| # | Exercício | Conceito |
|---|-----------|---------|
| 11 | Criar classe `Motor` com atributos e métodos | class / public / private |
| 12 | Construtor da classe Motor | constructor |
| 13 | Criar classe `Bateria` com método `consumir()` | métodos |
| 14 | Criar classe `Drone` que usa Motor e Bateria | composição |
| 15 | Herança — `DroneRacing` herda de `Drone` | inheritance |

### 🔴 Módulo 4 — C++ Avançado para Firmware
> Fase 4 — montagem física

| # | Exercício | Conceito |
|---|-----------|---------|
| 16 | Ponteiros — passar sensor por referência ao PID | pointers |
| 17 | Funções lambda para callbacks do controlador | lambda |
| 18 | Templates — função genérica de mapeamento de valor | templates |
| 19 | Arquivo `.h` — separar classe Drone em header | header files |
| 20 | Biblioteca Arduino customizada para o drone | .h + .cpp |

---

## ⏳ Próximos Passos

### Fase 2 — Restante
```
→ MPU-6050 simulado no Tinkercad
→ I2C — comunicação com sensor
→ Leitura de acelerômetro e giroscópio
→ C++ Módulo 1 — cout, cin, namespace, string
```

### Fase 3 — Comunicação
```
→ Python recebendo dados Serial do Arduino
→ Gráfico em tempo real com matplotlib
→ Comando Python → Arduino via Serial
→ C++ Módulo 2 — structs
→ C++ Módulo 3 — classes básicas
```

### Fase 4 — Montagem Física
```
→ Frame do drone
→ Motores brushless + ESC
→ Bateria LiPo
→ Raspberry Pi com Python
→ Controlador de voo em C++
→ C++ Módulo 4 — avançado
```

---

## 🛠️ Hardware Disponível

| Item | Status |
|------|--------|
| Arduino Uno R3 | ✅ Tenho |
| Cabo USB | ✅ Tenho |
| Protoboard 400 pontos | ✅ Tenho |
| LEDs vermelho/amarelo/verde | ✅ Tenho |
| Resistores 220Ω / 1K / 10K | ✅ Tenho |
| Jumpers macho/macho | ✅ Tenho |
| Botões pushbutton | ✅ Tenho |
| MPU-6050 | 🛒 Comprar |
| ESP32 | 🛒 Fase 3 |
| Raspberry Pi | 🛒 Fase 4 |

---

## 💡 Regras do Aprendizado

> **Trato com o tutor:**
> - ❌ Não recebo código pronto
> - ✅ Escrevo, erro, corrijo e aprendo
> - ✅ Mando código para revisão
> - ✅ Peço explicação quando travar

---

*Atualizado em: Mai/2026*