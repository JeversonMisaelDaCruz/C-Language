#include <stdio.h>

int main(){
float precoItem = 22.0;
float aVista = 0.10;
float cartao = 0.15 ;
float vezes = 0.10;
int escolha ;
float resultado;

printf("Digite qual opcao de pagamento deseja\n");
printf("Digite 1 para A vista, dois para cartão, 3 para parcelar em duas vezes\n");
scanf("%d", &escolha);

switch(escolha){
  case 1: 
  printf("Opção a vista escolhida");
  resultado = precoItem+(precoItem*aVista)  ;
  printf("%f" ,resultado);
   break;
  case 2:
  printf("Opção cartão escolhida");
   resultado = precoItem+(precoItem * cartao);
   printf("%f",resultado); 
    break;
  case 3:
    printf("Opção vezes escolhida\n");
  resultado = precoItem + (precoItem * vezes);
   printf("%f",resultado);
  break;

};
return 0;
};











// Elabore um algoritmo que calcule o que deve ser pago por um produto, considerando o preço normal de etiqueta e
// a escolha da condição de pagamento. Utilize os códigos da tabela a seguir para ler qual a condição de pagamento
// escolhida e efetuar o cálculo adequado.
// Código Condição de pagamento
// a) À vista em dinheiro ou cheque, recebe 10% de desconto
// b) À vista no cartão de crédito, recebe 15% de desconto
// c) Em duas vezes, preço normal de etiqueta sem juros
// d) Em duas vezes, preço normal de etiqueta mais juros de 10%