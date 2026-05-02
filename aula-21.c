/*O const é parecido com #define mas tem tipo declarado — é uma variável que não pode ser modificada:*/

#include <stdio.h>
const float gravidade = 9.8; //Tem tipo Float e 
#define GRAVIDADE 9.8 //Sen tipo apenas substituição

int main(){
    printf("Com o uso do Const: %.1f\n",gravidade);
    printf("Com o Define: %.1f\n", GRAVIDADE);

    return 0;
}