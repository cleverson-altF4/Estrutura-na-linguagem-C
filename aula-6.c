#include <stdio.h>

int main(){
    float bateria = 15.5;
    float temperatura = 55.0;
    printf("\nBateria do drone\n");
    if (bateria < 20)
    {
        
        printf("Bateria baixa! pousar imediatamente!\n");
    
    } else {
        printf("Bateria em nível seguro.\n");
    }

    printf("\nTemperatura do Drone\n");

    if (temperatura > 60)
    {
        
        printf("Superaquecimento! desligando o motor. \n");
    } else if (temperatura > 50)
    {
        printf("Temperatura alta! Reduzindo a potência\n");

    } else{
        printf("Temperatura normal\n");
    }
    
    
    return 0;
}