#include <stdio.h>

int main() {
  float r;
  float resultado;
  const float pi = 3.14;
  printf("Vamos calcular a area de um circulo, informe o valor do raio do circulo: ");
  scanf("%f", &r);
  resultado = pi * (r * r);
  printf("A area do circulo e: %2.f",resultado);

  return 0;
}