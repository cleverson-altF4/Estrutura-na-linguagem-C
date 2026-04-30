#include <stdio.h>

void decolar(){ //Função sem parâmetro
    printf("Decolando!\n");  
}

void exibir_altitude(float altitude){ //Função com parâmetro sem retorno
    printf("Altitude atual: %.1fm\n", altitude);

}

int ler_bateria(){ //Função sem parâmetro com retorno, lembrando que não inicia com VOID e sim com um INT e devolve ele em inteiro
    int bateria = 80;
    return bateria;
}


int main(){
    decolar();
    exibir_altitude(3.5);

    int nivel = ler_bateria();
    printf("Bateria: %d%%", nivel);

    return 0;

}