#include <stdio.h>

//Calcular a área de um retângulo
int main() {
  int base,altura;
  double calculoBase;
    printf("Vamos calcular a area de um retângulo, preciso de alguns dados! primeiro me de a o valor da base depos a altura\n");
    scanf("%d %d", &base, &altura);
    calculoBase = base * altura;
    printf("A area do retângulo e: %2.lf",calculoBase);
    return 0;
}