# Estrutura-na-linguagem-C

```C
#include <stdio.h>

int main() {
    int altitude = 0;
    int altitude_ligado = 10;
    float velocidade = 0.0;
    float velocidade_ligado = 6.5;
    float bateria = 100.0;
    float bateria_ligado = 60.6;
    char estado = 'D';
    char estado_ligado = 'L';

    printf("\n Drone desligado \n");
    printf("Altitude : %d metros [Desligado] \n", altitude);
    printf("Velocidade: %.1f m/s [Desligado] \n", velocidade);
    printf("Bateria: %.1f%% [Carregado] \n", bateria);
    printf("Estado: %c [Desligado] \n", estado);

    printf("\n Drone ligado\n");
    printf("Altitude: %d metros [Ligado]\n", altitude_ligado);
    printf("Velocidade: %.1f [Ligado]\n", velocidade_ligado);
    printf("Bateria: %.1f%% [descarregando]\n", bateria_ligado);
    printf("Estado: %c [Ligado]\n", estado_ligado);

    return 0;
}

Altura
Velocidade
Temperatura do motor
Nível da bateria
Estado (ligado/desligado)
Direção
Coordenadas
Tipos primitivos no contexto do drone
Tipo	Usaremos para
int	Altura em metros
float	Velocidade, temperatura
double	Cálculos mais precisos
char	Estado do drone ('L' ligado, 'D' desligado)
EXPLICAÇÃO RÁPIDA
🔹 int

Números inteiros.
Ex: altitude = 100 metros

🔹 float

Números com decimal.
Ex: velocidade = 12.5 m/s

🔹 double

Mais precisão (GPS por exemplo).

🔹 char

Um caractere.
Ex: modo = 'A' (automático)

---------------------------------------------------------------------------------

Operadores + Controle de Decisão

Agora você aprende:

if
else
switch
operadores lógicos (&&, ||, !)
comparações

💡 Isso permite que o drone tome decisões sozinho.

Exemplo mental:

Se bateria < 20% → voltar para base
Se temperatura > limite → desligar motor
Se altitude > limite → parar subida

```C
#include <stdio.h>

int main(){
    float bateria = 15.5;
    float temperatura = 55.0;
    printf("\nBateria do drone\n");
    if (bateria < 20)
    {
        
        printf("Bateria baixa! pousar imediatamente!\n");
    
    } else {
        printf("Bateria em nível seguro.\n");
    }

    printf("\nTemperatura do Drone\n");

    if (temperatura > 60)
    {
        
        printf("Superaquecimento! desligando o motor. \n");
    } else if (temperatura > 50)
    {
        printf("Temperatura alta! Reduzindo a potência\n");

    } else{
        printf("Temperatura normal\n");
    }
    
    
    return 0;
}


CONTROLE DE DECISÃO (if / else)
Tema: O Drone Começa a Pensar

Você já sabe guardar informações.
Agora o drone precisa tomar decisões sozinho.

Objetivo da Aula

Aprender:

if
else
else if
Operadores relacionais (>, <, >=, <=, ==)
Operadores lógicos (&&, ||)

```C
#include <stdio.h>

int main(){
    float bateria;
    float temperatura;

    printf("Sistema inteligente\n");
    printf("Digite o nível da bateria: ");
    scanf("%f", &bateria);

    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);

    if (bateria < 20 || temperatura > 60)
    {
        printf("Pouso forçado");
    } else {
        printf("Pode continuar o voo");
    }
    
    return 0;
}


--------------------------------------------------------

O laço while em C é uma estrutura de controle de fluxo usada para repetir um bloco de código enquanto uma condição específica for verdadeira.

Aqui está o essencial para você dominar o while:

1. Sintaxe Básica
A estrutura é muito simples. A condição é verificada antes de cada execução do bloco de código.

C
while (condição) {
    // Código que será repetido
}
Condição: Se for verdadeira (qualquer valor diferente de 0), o bloco executa.

Corpo: Onde o código "mora". Se a condição for falsa logo de cara, o código lá dentro nunca é executado.

2. Exemplo Prático: Contador
Para usar um while corretamente, você geralmente precisa de três coisas: inicializar uma variável, testar a condição e atualizar essa variável.

C
#include <stdio.h>

int main() {
    int i = 1; // 1. Inicialização

    while (i <= 5) { // 2. Condição
        printf("Contagem: %d\n", i);
        
        i++; // 3. Atualização (evita o loop infinito)
    }

    return 0;
}
3. O Perigo do Loop Infinito
Se você esquecer de atualizar a variável (o i++ no exemplo acima) ou se a condição nunca se tornar falsa, o programa ficará rodando para sempre, travando a execução.

4. Diferença entre while e do-while
É comum confundir os dois, mas a regra é simples:

while: Pensa antes de agir. Avalia a condição primeiro. Se for falsa, não faz nada.

do-while: Age antes de pensar. Executa o código pelo menos uma vez e só depois checa a condição para decidir se continua.

Exemplo de do-while:

C
int j = 10;
do {
    printf("Isso imprime uma vez mesmo sendo falso!\n");
} while (j < 5);

--------------------------------------------------------
O laço for em C é a estrutura de repetição preferida quando você já sabe exatamente quantas vezes quer que o código seja executado. Ele é mais compacto que o while porque agrupa a inicialização, a condição e o incremento em uma única linha.

1. Estrutura do for
A sintaxe segue este padrão:

C
for (inicialização; condição; incremento) {
    // Código a ser repetido
}
Inicialização: Executada apenas uma vez, no início (ex: int i = 0).

Condição: Testada antes de cada repetição. Se for falsa, o laço para.

Incremento/Atualização: Executado ao final de cada repetição (ex: i++).

C
#include <stdio.h>

int main() {
    //   (1)      (2)     (3)
    for (int i = 1; i <= 5; i++) {
        printf("Número: %d\n", i);
    }
    return 0;
}
3. Comparativo: for vs while
Ambos podem fazer as mesmas coisas, mas o for organiza melhor o código quando há um contador envolvido.

Com while:

C
int i = 0; // Inicialização fora
while (i < 10) {
    // código
    i++; // Incremento "escondido" no fim
}
Com for:

C
// Tudo em uma linha só: organizado e difícil de esquecer o incremento
for (int i = 0; i < 10; i++) {
    // código
}
4. Dicas Avançadas
Loop Infinito: Se você deixar os campos vazios for(;;), o loop nunca para.

Múltiplas Variáveis: Você pode inicializar mais de uma variável: for(int i=0, j=10; i < j; i++, j--).

Decremento: Também funciona para contagem regressiva: for(int i=10; i > 0; i--).


----------------------------------------------------------

Funções em C

Funções em C são blocos de código reutilizáveis que executam uma tarefa específica. Elas permitem dividir um programa grande em partes menores, facilitando organização, leitura e manutenção.

🔹 Estrutura de uma Função

Uma função em C possui a seguinte estrutura:

tipo_retorno nome_da_funcao(parametros) {
    // corpo da função
    return valor; // opcional dependendo do tipo
}
Explicando cada parte:
tipo_retorno → Define o tipo de dado que a função irá retornar (int, float, char, void, etc).
nome_da_funcao → Identificador usado para chamar a função.
parametros → Variáveis que recebem valores na chamada da função.
corpo da função → Conjunto de instruções executadas.
return → Envia um valor de volta para quem chamou a função (quando necessário).
🔹 Exemplo Prático
#include <stdio.h>

int soma(int a, int b) {
    int resultado = a + b;
    return resultado;
}

int main() {
    int valor = soma(5, 3);
    printf("Resultado: %d\n", valor);
    return 0;
}


O que acontece aqui?
A função soma recebe dois números inteiros.
Ela calcula a soma.
Retorna o resultado.
A função main chama soma(5,3).
O valor retornado é armazenado na variável valor.
🔹 Função Sem Retorno

Quando a função não precisa retornar nada, usamos void:

void mensagem() {
    printf("Olá, mundo!\n");
}


🔹 Protótipo de Função

Se a função for criada depois da main, é necessário declarar seu protótipo antes:

int soma(int a, int b); // protótipo

Isso informa ao compilador que a função existe.

🔹 Tipos de Funções

Em C, podemos ter:

Função com parâmetros e com retorno
Função com parâmetros e sem retorno
Função sem parâmetros e com retorno
Função sem parâmetros e sem retorno
🔹 Variáveis Locais

Variáveis criadas dentro da função:

Só existem dentro dela
Não podem ser acessadas fora

```C
#include <stdio.h>

//Variáveis globais

void decolar(){ //Função sem parâmetro
    printf("Decolando!\n");  
}

void exibir_altitude(float altitude){ //Função com parâmetro sem retorno
    printf("Altitude atual: %.1fm\n", altitude);

}

int ler_bateria(){ //Função sem parâmetro com retorno, lembrando que não inicia com VOID e sim com um INT e devolve ele em inteiro
    int bateria = 80;
    return bateria;
}

float calcular_diferenca(float atual, float alvo){
    float diferenca = alvo - atual;
    return diferenca;
}


//Programa principal  - Locais
int main(){
    decolar(); // Função sem parâmetro e sem retorno
    exibir_altitude(3.5); //função com parâmetro e sem retorno

    int nivel = ler_bateria(); //Função sem VOID e sim INT sem parâmetro porém com retorno
    printf("Bateria: %d%%\n", nivel);

    float diferenca = calcular_diferenca(1.5, 4.0); //função com FLOAT e com parâmetro e com retorno
    printf("A diferença para o alvo: %.1fm\n", diferenca);

    return 0;

}


-----------------------------------------------------------

1. Variáveis Locais
São declaradas dentro de uma função ou de um bloco de código (entre chaves { }).

Escopo: Só existem dentro da função onde foram criadas.

Vida útil: São destruídas assim que a execução da função termina.

Inicialização: Não possuem valor padrão. Se você não atribuir um valor, elas conterão "lixo de memória".

Uso: Ideal para cálculos temporários e proteção de dados (uma função não mexe na variável da outra).


2. Variáveis Globais
São declaradas fora de todas as funções, geralmente no topo do arquivo.

Escopo: Podem ser acessadas e modificadas por qualquer função do programa.

Vida útil: Permanecem na memória durante todo o tempo em que o programa estiver rodando.

Inicialização: São automaticamente inicializadas com zero (0) se você não definir um valor.

Uso: Úteis para configurações gerais ou estados que todo o programa precisa conhecer.



### Exemplo de Variáveis Locais e Globais em C
```c
#include <stdio.h>

int g = 10; // VARIÁVEL GLOBAL - Acessível em todo o programa

void funcao() {
    int l = 5; // VARIÁVEL LOCAL - Existe apenas dentro desta função
    printf("Local: %d, Global: %d\n", l, g);
}

int main() {
    funcao();
    
    // printf("%d", l); // ERRO! A main não conhece a variável 'l'
    
    printf("Global na main: %d\n", g); // OK! 'g' é pública e visível aqui
    return 0;
}


-----------------------------------------------------------------------------------

O modificador const em C é usado para criar variáveis cujos valores não podem ser alterados após a inicialização. Pense nele como uma promessa de que aquele valor será apenas para leitura (read-only).

1. Como declarar
Basta colocar a palavra const antes ou depois do tipo da variável:

C
const int LIMITE = 100;
// LIMITE = 200; // ERRO! O compilador não permite.
Dica: É uma convenção comum (embora não obrigatória) escrever nomes de constantes em MAIÚSCULAS para diferenciá-las visualmente das variáveis comuns.

------------------------------------------------------------------------------


# Progresso — Projeto Drone

## Fase 1 — Concluída ✅

### C
- Variáveis: int, float, char ✅
- if/else, else if ✅
- while com condição dupla ✅
- for loop com i++, i += 10 ✅
- break ✅
- printf com %d, %.2f, %c, %%, \n ✅ 
- Arrays — declarar, acessar, modificar com for ✅
- Funções:
  - void f() — sem parâmetro, sem retorno ✅
  - void f(param) — com parâmetro, sem retorno ✅
  - int f() — sem parâmetro, com retorno ✅
  - float f(param, param) — com parâmetro, com retorno ✅
- Variáveis locais — nascem e morrem dentro da função ✅
- Variáveis globais — todas as funções enxergam ✅
- Desafio Final: sistema completo com array + funções + globais ✅

### Python
- Variáveis sem declarar tipo ✅
- if/elif/else  ✅
- Funções com def, parâmetros e valor padrão ✅
- f-strings para formatar saída ✅
- OpenCV: câmera ao vivo ✅
- HUD com putText, cores, mira com cv2.line ✅

## Próximo — Fechar Fase 1
- C: const e #define 
- C: scanf

## Fase 2 — Hardware Real
- C: Protocolo I2C
- C: Leitura do sensor MPU-6050
- C: Enviar dados via Serial
- Python: Gráfico em tempo real com matplotlib


--------------------------------------------------------------------------------

#define
O #define é uma substituição simples — antes de compilar o C troca o nome pelo valor em todo o código:
c#define NOME_DA_CONSTANTE valor
Características:

Fica antes do main e fora de tudo
Sem ; no final
Nome em MAIÚSCULAS por convenção
Sem tipo — só nome e valor

Adicione no seu arquivo:
c#define MAX_ALTITUDE 100
#define NUM_MOTORES 4
#define GRAVIDADE 9.8