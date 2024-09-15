#include <stdio.h>
int main(){

  int n1,n2;
  printf("Insira o primeiro numero\n");
  scanf("%d",&n1);
  printf("Insira o segundo numero\n");
  scanf("%d",&n2);
  while (n1<=n2){
    printf("%d",n1);
    n1++;
  }
}