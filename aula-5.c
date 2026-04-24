/*Simulação de Consumo de Bateria

Crie variáveis:

float bateria = 100.0
int tempo_voo
float consumo_por_minuto = 2.5
bateria_restante = bateria - (tempo_voo * consumo_por_minuto)*/

#include <stdio.h>

int main(){
    printf("Simulação de consumo de bateria\n");

    float bateria = 100;
    int tempo_voo;
    float consumo_por_minuto = 2.5;
    float bateria_restante;

    printf("Quanto tempo de voo: ");
    scanf("%d", &tempo_voo);

    bateria_restante = bateria - (tempo_voo * consumo_por_minuto);

    printf("Bateria consumida foi %.2f%%", bateria_restante);

    return 0;
    
}