#include <stdio.h>

float bateria = 100;
float altitude = 0.0;
int motores[4] = {0,0,0,0};

void ligar_motores(){
    for (int i = 0; i < 4; i++)
    {
        motores[i] = 30;
    } 
    
    
}

void exibir_status(){
    printf("==== Status do Drone ====\n");
    printf("Bateria: %.1f%%\n", bateria);
    printf("Altitude: %.1fM\n", altitude);
    for (int i = 0; i < 4; i++)
    {
        printf("Motor %d : %d%%\n", i+1, motores[i]);
    }
    printf("==========================\n");
    
}

void subir(float metros){
    altitude = altitude + metros;
}

void consumir_bateria(){
    bateria = bateria - 10;
}

int main(){
    ligar_motores();
    subir(15);
    consumir_bateria();
    consumir_bateria();
    consumir_bateria();
    exibir_status();

    return 0;
}