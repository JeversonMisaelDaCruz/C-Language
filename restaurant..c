#include <stdio.h>

double KG = 12.00;
float peso;
float resultado;

int main() {
    printf("O restaurante a quilo Bem-Bão cobra R$12,00 por cada quilo de refeição!,Vamos pesar sua comida,digite a quantidade kilos\n");
    scanf("%f",&peso);
    resultado = peso * KG;
    printf("O valor do seu almoço deu no total de %f pois o tanto de kilos foi %f",resultado,peso);


    return 0;
}







// O restaurante a quilo Bem-Bão cobra R$12,00 por cada quilo de refeição.  
//Escreva um algoritmo que leia o peso do prato montado pelo cliente (em quilos) e imprima o valor a pagar.
//Assuma que a balança já,desconte o peso do prato.
