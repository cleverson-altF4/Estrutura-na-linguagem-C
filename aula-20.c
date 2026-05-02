/*const e #define — Valores que não mudam
No drone existem valores que nunca mudam durante o voo:

Altitude máxima permitida → sempre 100m
Número de motores → sempre 4
Gravidade → sempre 9.8 m/s²

Para isso existe o const e o #define.*/

#include <stdio.h>
#define MAX_ALTURA 100
#define NUMERO_MOTORES 4
#define GRAVIDADE 9.8

int main(){
    printf("Altura máxima: %dM\n", MAX_ALTURA);
    printf("Limite de motores: %d\n", NUMERO_MOTORES);
    printf("Gravidade: %.1fM\n", GRAVIDADE);

    return 0;
}