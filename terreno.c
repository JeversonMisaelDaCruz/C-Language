#include <stdio.h>
int main() {
   float lado1, lado2;
   float resultado;
    printf("Informe o tamanho do primeiro lado do terreno, !\n");
    scanf("%f", &lado1);
    printf("Informe o tamanho do segundo lado do terreno, !\n");
    scanf("%f", &lado2);
    resultado = (lado1 * lado2);
    printf("A area do terreno e: %f", resultado);
}



