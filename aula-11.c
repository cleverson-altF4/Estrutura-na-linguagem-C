#include <stdio.h>

int main(){
    float altitude = 0;
    int ciclo = 0;

    while (ciclo < 8){
        altitude = altitude + 0.5; //Ganha meio metro

        if (altitude < 3.0) {
            printf("Subindo...\n");

        } else if (altitude <= 4) {
            printf("Altitude alvo!\n");

        } else {
            printf("Descendo...\n");
        }
        
        ciclo = ciclo + 1; //Quebra o loop
        
    }

    printf("\n Fim da simulação: Ciclos - %d\n", ciclo);
    return 0;
    
}