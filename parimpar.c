#include <stdio.h>

int main() {
  int numero;


    printf("Digite um numero para verificarmos\n");
    scanf("%d", &numero);
    if(numero % 2 == 0){
      printf("Seu numero e par logo ira somar +5, seu numero e: %d",numero);
    }else{
      printf("Seu numero e impar logo ira somar +8, seu numero e: %d",numero);
    };
    return 0;
}




//Faça um algoritmo que leia uma variável e some 5 caso seja par 
//ou some 8 caso seja ímpar
//imprimir o resultadodesta operação.

// 2 % == 0