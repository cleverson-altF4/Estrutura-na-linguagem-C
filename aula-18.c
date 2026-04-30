#include <stdio.h>

//variáveis Globais

int bateria = 100;

void consumir_bateria(){
    bateria = bateria - 10;
    
}

void exibir_bateria(){
    printf("Valor atual: %d%%\n", bateria);
}



// Variáveis Locais
int main(){
    exibir_bateria();
    consumir_bateria();
    consumir_bateria();
    exibir_bateria();
}