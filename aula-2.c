//Sensor de Temperatura

/*Crie variáveis para representar:

Temperatura do motor (float)
Temperatura máxima permitida (float)
Número de hélices (int)
Modo de voo ('M' manual, 'A' automático)

Mostre tudo na tela.*/

#include <stdio.h>

int main(){
    float temperatura_motor = 45.6;
    float temperatura_maxima = 61.5;
    int helices = 4;
    char modo_de_voo = 'M'; //Manual

    printf("\nSensor de temperatura\n");
    printf("Temperatura do motor: %.1f\n", temperatura_motor);
    printf("Temperatura máxima: %.1f\n", temperatura_maxima);
    printf("Números de Hélices: %d\n", helices);
    printf("Modo de voo: %c\n", modo_de_voo);

    return 0;
}