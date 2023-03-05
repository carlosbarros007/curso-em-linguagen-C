#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Escreva um programa que identifique se um número é par ou impar. Se par apresentar 
a sua raiz quadrada, se impar apresentar sua metade. */

int main(){

    float idade;
    float pesso;
    
    printf("qual a sua idade?\n");
    scanf("%f", &idade);

    printf("qual o seu pesso?\n");
    scanf("%f", &pesso);


    if (idade < 18 || idade > 67 || pesso < 50){

        printf("voce nao pode doar sangue!!!\n");

    }else{
        printf("voce pode doar sanque!!!\n");
    }
    
 
}