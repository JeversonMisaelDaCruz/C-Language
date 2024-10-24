#include<stdio.h>
// exemplo de matriz 4 e 5 caminhando por colunas
int main(){
  int matriz[4][5];

  for(int l = 0;l<4;l++){
    for(int c = 0;c<5;c++){
        printf("matriz [%d],[%d]:",l,c);
        scanf("%d", &matriz[l][c]);
    }
  }
}