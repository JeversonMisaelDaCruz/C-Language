#include <stdio.h>

//Somar dois numeros inteiros.

int main(){
  int n1,n2;
  int resultado;

  printf("Digite dois numeros! vamos realizar uma soma.\n");
  scanf("%d %d",&n1,&n2);
  resultado = n1 + n2;
  printf("A soma e %d",resultado);

}