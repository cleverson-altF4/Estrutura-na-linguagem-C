#include <stdio.h>

int main(){
   int motor1=0, motor2=0, motor3=0, motor4=0;
   int ciclo = 0;
   int direcao = 1;

   while (motor1 > 0 || direcao == 1)
   {
        if (direcao == 1)
        {
            motor1 = motor1 + 10;
            motor2 = motor2 + 10;
            motor3 = motor3 + 10;
            motor4 = motor4 + 10;
        } else {
            motor1 = motor1 - 15;
            motor2 = motor2 - 15;
            motor3 = motor3 - 15;
            motor4 = motor4 - 15;
        }

        if (motor1 >= 100 && motor2 >= 100 && motor3 >= 100 && motor4 >= 100)
        {
            direcao = -1;
            printf("VELOCIDADE MÁXIMA!\n");   
        }

        if (motor1 <= 0 && direcao == -1)
        {
            printf("Motores desligados\n");
            break;
        }

         printf("Ciclo: %d | Motor1: %d%% | Motor2: %d%% | Motor3: %d%% | Motor4: %d%% | \n",
            ciclo, motor1, motor2, motor3, motor4);

        if (direcao == 1) {
             printf("Subindo...\n");
        } else {
            printf("Descendo...\n");
        }
        
        
        ciclo = ciclo + 1;
        
   }
   
   
   return 0;

}