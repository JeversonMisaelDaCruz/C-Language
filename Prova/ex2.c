#include <stdio.h>

//calcular a media de 3 numeros

int main(){
  int n1,n2,n3;
  int resultadoSoma;
  double resultadoMedia;

  printf("Digite os numeros inteiros\n: ");
  scanf("%d %d %d",&n1,&n2,&n3);
  resultadoSoma= n1+n2+n3;
  resultadoMedia = resultadoSoma/3;
  printf("A media e: %lf", resultadoMedia);




}