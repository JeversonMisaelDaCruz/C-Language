#include <stdio.h>

int main() {
  const double gasPrice = 5.50;
  int realGasolina;
  float totalLitros;
  float totalGasolina;


    printf("Informe o quantos reais deseja abastecer\n");
    scanf("%d", &realGasolina);
    totalLitros = realGasolina/gasPrice;
    totalGasolina = totalLitros * gasPrice;
    printf("voce consegue abastecer %f no total de %f",totalLitros,totalGasolina);

    return 0;
}


//Um motorista deseja colocar no seu tanque X reais de gasolina. 
//Escreva um algoritmo para ler o preço do 
//litro da gasolina e o valor do pagamento, e exibir quantos litros 
//ele conseguiu colocar no tanque.