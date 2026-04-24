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