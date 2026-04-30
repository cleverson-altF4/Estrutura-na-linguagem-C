/*Desafio proposto com Funções*/

//Sistema de monitoramento do Drone

#include <stdio.h>

float altitude = 0.0; //Váriavel global

void subir(float metros){
    altitude = altitude + metros;
    
}

void descer(float metros){
   altitude = altitude - metros;
    
}

void exibir_status(){
    printf("Altitude atual: %1.fm\n", altitude);
}

int main(){
    subir(2.5);
    exibir_status();
    subir(1.5);
    exibir_status();
    descer(1.0);
    exibir_status();

    return 0;
}