#include <stdio.h>

float altitude;
int motores;
float tempo_de_voo;

int main(){
    printf("Digite a altitude desajada: ");
    scanf("%f", &altitude);
    printf("Digite a potẽncia dos motores (0-100): ");
    scanf("%d", &motores);
    printf("Digite o tempo de voo: ");
    scanf("%f", &tempo_de_voo);

    printf("====== Plano de voo =======\n");
    printf("Altitude: %1.f\n", altitude);
    printf("Potência: %d%%\n", motores);
    printf("Tempo: %.1f\n", tempo_de_voo);

    return 0;

}