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