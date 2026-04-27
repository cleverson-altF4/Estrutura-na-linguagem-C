#include <stdio.h>

int main(){
    float altitude = 0;
    int ciclo = 0;
    int direcao = 1;

    while (altitude > 0.0 || direcao == 1)
    {
        if (direcao == 1)
        {
            altitude = altitude + 0.5;
            
        } else {
            altitude = altitude - 0.3;
            
        }

        if (altitude >= 4 && direcao == 1)
        {
            direcao = -1;
        }

        if (altitude <= 0 && direcao == -1)
        {
            printf("Ciclo: %d | Altitude: 0.0 metros ! - POUSOU\n", ciclo);
            break;
        }

        if (direcao == 1)
        {
            printf("Ciclo: %d | Altitude: %.1f Metros | Subindo...\n", ciclo, altitude);
        } else {
            printf("Ciclo: %d | Altitude: %.1f Metros | Descendo...\n", ciclo, altitude);
        }
        
        
        ciclo = ciclo + 1;
        
    }
    return 0;
}