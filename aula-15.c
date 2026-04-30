/*Uso do Array — 4 valores numa lista só*/

#include <stdio.h>

int main(){
    int motores[4] = {30,75,50,90}; //Array[4] = {parâmetros}

   for (int i = 0; i < 4; i++)
   {
        printf("Motor %d: %d%%\n", i + 1, motores[i]);
   }
   
    return 0;
}