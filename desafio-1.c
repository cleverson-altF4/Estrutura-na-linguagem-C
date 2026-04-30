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
int main(){

}