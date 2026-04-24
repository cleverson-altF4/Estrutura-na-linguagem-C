/*Drone Interativo

Crie um programa que:

Pergunte ao usuário:
Altitude desejada
Velocidade desejada
Armazene em variáveis*/

#include <stdio.h>

int main(){
    float altitude = 0;
    float velocidade = 0;
    printf("Altitude desejada? ");
    scanf("%f",&altitude);

    printf("Velocidade desejada? ");
    scanf("%f",&velocidade);

    printf("A altura atingida %.2f m/s\n", altitude);
    printf("A velocidade atingida %.2f\n", velocidade);

    return 0;
    
}