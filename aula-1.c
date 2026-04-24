#include <stdio.h>

int main() {
    int altitude = 0;
    float velocidade = 0.0;
    float bateria = 100.0;
    char estado = 'D';

    printf("Altitude: %d metros\n", altitude);
    printf("Velocidade: %.1f m/s\n", velocidade);
    printf("Bateria: %.1f%%\n", bateria);
    printf("Estado: %c\n", estado);

    return 0;
}