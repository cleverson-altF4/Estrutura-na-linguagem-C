# Estrutura-na-linguagem-C

🚁 PROJETO: CONSTRUINDO UM DRONE EM C 

Hoje vamos aprender:

🟢 VARIÁVEIS E TIPOS PRIMITIVOS

Mas pensando como um sistema de controle de drone real.

🎯 MISSÃO 1 — Entender o que são variáveis no contexto do drone
📌 Conceito direto ao ponto

Uma variável é:

Um espaço na memória que guarda um valor que pode mudar.

No drone, precisamos guardar:

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

-------------------------------------------------------
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


--------------------------------------------------------
For Loop em C

O for é uma estrutura de repetição usada quando sabemos quantas vezes um bloco de código deve ser executado.

Ele é muito utilizado para contagens, percorrer vetores e repetir instruções de forma controlada.

🔹 Estrutura do for
for (inicialização; condição; incremento) {
    // bloco de código
}
📖 Explicando cada parte:
Inicialização → Executada uma única vez no início do loop.
Condição → Enquanto for verdadeira, o loop continua.
Incremento/Decremento → Atualiza a variável de controle a cada repetição.
🔹 Exemplo Básico
#include <stdio.h>

int main() {

    for (int i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }

    return 0;
}
🧠 O que acontece?
i começa valendo 1
O programa verifica se i <= 5
Executa o bloco
Incrementa i
Repete até a condição ser falsa

Saída:

1
2
3
4
5


🔹 Loop Decrescente
for (int i = 10; i >= 0; i--) {
    printf("%d ", i);
}


🔹 Incremento Diferente
for (int i = 0; i <= 10; i += 2) {
    printf("%d ", i);
}



Conta de 2 em 2.

🔹 For Infinito
for (;;) {
    printf("Loop infinito\n");
}

Cuidado: precisa de um break para parar.

🔹 Usando break e continue
break → interrompe o loop
continue → pula para a próxima repetição

Exemplo:

for (int i = 0; i < 10; i++) {
    if (i == 5) break;
    printf("%d ", i);
}


🎯 Quando usar for?
Quando souber o número de repetições
Para percorrer arrays
Para contagens crescentes ou decrescentes

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

✅ Função com parâmetros e com retorno
✅ Função com parâmetros e sem retorno
✅ Função sem parâmetros e com retorno
✅ Função sem parâmetros e sem retorno
🔹 Variáveis Locais

Variáveis criadas dentro da função:

Só existem dentro dela
Não podem ser acessadas fora