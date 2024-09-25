// Faça um programa, utilizando estrutura de condição, que receba um número real, digitado pelo usuário e mostre o
// menu para selecionar o tipo de cálculo que deve ser realizado:
// 101-Raiz quadrada
// 102-A metade
// 103-10% do número
// 104-O dobro
// Escolha a opção

#include <stdio.h>
#include <math.h>

int escolha;
double valor;

int main() {
    printf("Escolha 1 para raiz quadrada, 2 para metade, 3 para 10, 4 para dobro");
    scanf("%d", &escolha);
    printf("Escolha um valor");
    scanf("%f", &valor);

    float quadradoBosta = sqrt(valor);

    switch (escolha) {
        case 1:
            printf("A raiz quadrada de %f é: %.2f", valor, quadradoBosta);
            break;
        case 2:
            printf("A metade de %f é: %.2f", valor, valor / 2);
            break;
        case 3:
            printf("10%% de %f é: %.2f", valor, valor * 0.1);
            break;
        case 4:
            printf("O dobro de %f é: %.2f", valor, valor * 2);
            break;
        default:
            printf("Opção inválida");
            break;
    };
}
