#include <stdio.h>

float altitude;
int motores[4] = {0,0,0,0};

int main(){
    printf("Digite a altitude desejada: ");
    scanf("%f", &altitude);

    for (int i = 0; i < 4; i++)
    {
        printf("Digite a potência do motor %d: ", i+1);
        scanf("%d", & motores[i]);
       
    }

    printf("========== RELATÓRIO ==========\n");
    printf("Altitude: %.1fm\n", altitude);
    for (int i = 0; i < 4; i++)
    {
        printf("Motor %d: %d%%\n", i+1, motores[i]);
    }
    
    return 0;
}