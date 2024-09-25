// Um determinado clube de futebol pretende classificar seus atletas em categorias e para isto ele contratou um
// programador para criar um programa que executasse esta tarefa. Para isso o clube criou uma tabela que continha a
// faixa etária do atleta e sua categoria. A tabela está demonstrada abaixo:
// IDADE CATEGORIA
// De 05 a 10 Infantil
// De 11 a 15 Juvenil
// De 16 a 20 Junior
// De 21 a 25 Profissional
// Construa um programa que solicite o nome e a idade de um atleta e imprima a sua categoria.

#include <stdio.h>
int main (){
  int idadeAtleta;
  printf("Digite a idade do atleta para definir a categeoria.");
  scanf("%d",&idadeAtleta);
  switch (idadeAtleta)
  {
  case 5 ... 10 :
  printf("INFANTIL");
    break;
  case 11 ... 15 :
  printf("JUVENIL");
    break;
    case 16 ... 20 :
  printf("JUNIOR");
    break;
     case 21 ... 25 :
  printf("PROFISSIONAL");
    break;
  
  }
}