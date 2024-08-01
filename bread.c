#include <stdio.h>
int paes;
int broa;
const float valorPao = 0.12;
const float valorBroa = 1.50;
float valorDia;
float poupanca;

int main() {
    printf("Informe a quantidade de pães!\n");
    scanf("%d", &paes);
    printf("Informe a quantidade de broas!\n");
    scanf("%d", &broa);
    valorDia = (paes * valorPao) + (broa * valorBroa);
    printf("O valor do dia é: %f", valorDia);
    poupanca = (valorDia * 0.10);
    printf("O valor da poupança e %f", poupanca);

    return 0;
}