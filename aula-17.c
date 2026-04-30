#include <stdio.h>


//Variáveis globais

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

float calcular_diferenca(float atual, float alvo){
    float diferenca = alvo - atual;
    return diferenca;
}


//Programa principal  - Locais
int main(){
    decolar(); // Função sem parâmetro e sem retorno
    exibir_altitude(3.5); //função com parâmetro e sem retorno

    int nivel = ler_bateria(); //Função sem VOID e sim INT sem parâmetro porém com retorno
    printf("Bateria: %d%%\n", nivel);

    float diferenca = calcular_diferenca(1.5, 4.0); //função com FLOAT e com parâmetro e com retorno
    printf("A diferença para o alvo: %.1fm\n", diferenca);

    return 0;

}