#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

/*.Elabore um programa que realize 5 perguntas para uma pessoa sobre um determinado 
crime. As perguntas são:
a. "Telefonou para a vítima?"
b. "Esteve no local do crime?"
c. "Mora perto da vítima?"
d. "Devia para a vítima?"
e. "Já trabalhou com a vítima?"
O programa deve no final emitir uma classificação sobre a participação da pessoa no 
crime. Se a pessoa responder positivamente a 2 questões ela deve ser classificada como 
"Suspeita", entre 3 e 4 como "Cúmplice" e 5 como "Assassino". Caso contrário, ele será 
classificado como "Inocente".*/

// faz o calculo da hipotenusa
float calculoIpotenusa(float cateto1, float cateto2){

    // calcula o quadrado dos catetos e faz a soma

    float somaQuadradoCatetos = (cateto1 * cateto1) + (cateto2 * cateto2);
    

    // resultado final hipotenusa
    float resultado= sqrt(somaQuadradoCatetos);

    return (resultado);

}


int main(void){

    //variaveis de entrada e saida

    float valorCateto1;
    float valorCateto2;
    float resultadoFinal;


    printf("calcule a hipotenusa!!!!\n");
    system("pause");

    printf("digite o valor dos catetos!!!\n");
    scanf("%f %f", &valorCateto1, &valorCateto2);

    resultadoFinal = calculoIpotenusa(valorCateto1, valorCateto2);

    printf("%.2f", resultadoFinal);

    return 0;
}


