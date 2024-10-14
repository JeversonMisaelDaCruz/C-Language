// Escreva um algoritmo que calcule o somatório dos números de um intervalo informado pelo usuário.

#include <stdio.h>
int n1;
int n2;
int valor, soma;


int main(){
printf(" Digite o primeiro numero para calcular o intervalo ");
scanf("%d ",&n1);
printf(" Digite o segundo numero para calcular o intervalo ");
scanf("%d ",&n2);
valor = n1;

while(n1>n2){
  soma = soma +valor;
  valor++;
  
}
printf(" a soma %d  ", soma);
}
//enquanto n1