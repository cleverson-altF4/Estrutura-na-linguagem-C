#include <stdio.h>
#define MAX_ALTITUDE 120
#define NUMERO_MOTORES 4
const float TENSAO_BATERIA = 11.1; //Não pode ser modificada
const int TEMPO_MAXIMO_DE_VOO = 30;

//Variável global
float altitude = 0.0;
float bateria = 15;

//Função que exibe todos os Const e Define
void exibir_configuracao(){
    printf(" ======= CONFIGURAÇÃO DO DRONE =======\n");
    printf("Altitude máxima:  %dM\n", MAX_ALTITUDE);
    printf("Números de motores: %d\n", NUMERO_MOTORES);
    printf("Tensão da bateria: %.1fV\n", TENSAO_BATERIA);
    printf("Tempo máximo de voo: %d\n", TEMPO_MAXIMO_DE_VOO);
    printf("========================================\n");
}

//Função que verifica a altitude
void verificar_altitude(float metros){
    if (metros > MAX_ALTITUDE)
    {
        printf("Altitude %.1fM: LIMITE ULTRAPASSADO!\n", metros);
        
    } else {
        printf("Altitude %.1fM: OK!\n", metros);
    }
    
}

void verificar_bateria(){
    if (bateria < 20)
    {
        printf("ALERTA: Bateria crítica! %.1f%%\n", bateria);
    }
    
}



int main(){
    exibir_configuracao();
    verificar_altitude(80);
    verificar_altitude(130);
    verificar_bateria();

    return 0;
}