#include <stdio.h>

int main(){
  const anoAtual = 2024;
  int anoNascimento,resultadoAnos;
  printf("Write the year of your birth \n");
  scanf("%d",&anoNascimento);
  resultadoAnos = anoAtual - anoNascimento;

  if(resultadoAnos>=18){
      printf("You can vote");
  }else{
    printf("You cannote vote");
  };

}










// Escreva um programa para ler o ano de nascimento de uma pessoa e
// escrever uma mensagem que diga se ela poderá ou não votar este ano
// if person have 18 years he can vote,else no cannot vote