#include <stdio.h>
const int NUMERO_ROTACOES = 1000;
const float TENSAO_BATERIA = 11.1;
const int TEMPO_DE_VOO = 20;    

int main(){
    printf(" ====== O uso do Const ======\n");
    printf("Número de rotações: %d\n", NUMERO_ROTACOES = 2000); //Não se pode mudar o const
    printf("Tensão da bateria: %.1f\n", TENSAO_BATERIA);
    printf("Tempo de voo: %d\n", TEMPO_DE_VOO);

    return 0;

}