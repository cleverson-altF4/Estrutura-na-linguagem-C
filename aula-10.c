#include <stdio.h>

int main(){
    float altitude_atual = 1.2;
    float altitude_alvo = 3.0;

    if (altitude_atual < altitude_atual)
    {
        printf("Abaixo do alvo - Subindo!\n");
    } else if (altitude_atual > altitude_alvo)
    {
        printf("Acima do alvo - descendo!\n");
    } else {
        printf("Altitude estável!\n");
    }

    return 0;
    
    }
    
