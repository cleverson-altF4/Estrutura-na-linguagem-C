#include <stdio.h>

int main(){
    float bateria;
    float temperatura;

    printf("Sistema inteligente\n");
    printf("Digite o nível da bateria: ");
    scanf("%f", &bateria);

    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);

    if (bateria < 20 || temperatura > 60)
    {
        printf("Pouso forçado");
    } else {
        printf("Pode continuar o voo");
    }
    
    return 0;
}