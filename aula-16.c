/*Desafio proposto usando arrays*/

#include <stdio.h>

int main(){
    int motores[4] = {30,75,50,90};
    
    printf("==== ANTES ====\n");
    for (int j = 0; j < 4; j++)
    {
        
        printf("Motor %d: %d%%\n", j+1, motores[j]);

    }

    printf("\n");

    for (int i = 0; i < 4; i++) 
    {
        motores[i] = motores[i] + 10; //Esse array ele salva em vez de colocar dentro do printf +10
    }
    
    printf("=== DEPOIS (+10%%) ===\n");
    for (int i = 0; i < 4; i++)
    {
        
        printf("Motor %d: %d%%\n", i +1,motores[i]);
    }
    return 0;
}

