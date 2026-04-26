#include <stdio.h>

int main(){

    float altitude;
    printf("Limite de altura\n");
    printf("Digite a altitude desejada: ");
    scanf("%f",&altitude);

    if (altitude > 120)
    {
        printf("Limite máximo atingido");
    } else {
        printf("Altitude segura\n");
    }
    

    return 0;

}