#include <stdio.h>

int main() {
    float valorVenda, valorFinal;
    int opcao;

    printf("Digite o valor da venda: R$ ");
    scanf("%f", &valorVenda);

    printf("\nEscolha a forma de pagamento:\n");
    printf("1 - Venda a Vista (10%% de desconto)\n");
    printf("2 - Venda a Prazo 30 dias (5%% de desconto)\n");
    printf("3 - Venda a Prazo 60 dias (sem desconto)\n");
    printf("4 - Venda a Prazo 90 dias (5%% de acréscimo)\n");
    printf("5 - Venda com cartão de débito (8%% de desconto)\n");
    printf("6 - Venda com cartão de crédito (7%% de desconto)\n");
    printf("Escolha a opção: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1: 
            valorFinal = valorVenda * 0.90;
            break;
        case 2: 
            valorFinal = valorVenda * 0.95;
            break;
        case 3: 
            valorFinal = valorVenda;
            break;
        case 4:
            valorFinal = valorVenda * 1.05;
            break;
        case 5: 
            valorFinal = valorVenda * 0.92;
            break;
        case 6: 
            valorFinal = valorVenda * 0.93;
            break;
        default:
            printf("Opção inválida!\n");
            return 1;
    }

    printf("O valor final da venda é: R$ %.2f\n", valorFinal);

    return 0;
}
