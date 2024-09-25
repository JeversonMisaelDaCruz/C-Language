#include <stdio.h>

int main() {
    int mes;

    printf("Digite um número entre 1 e 12, correspondente a um mês: ");
    scanf("%d", &mes);

    switch (mes) {
        case 1 ... 3:
            printf("A estação do ano correspondente ao mês %d é Verão.\n", mes);
            break;
        case 4 ... 6:
            printf("A estação do ano correspondente ao mês %d é Outono.\n", mes);
            break;
        case 7 ... 9:
            printf("A estação do ano correspondente ao mês %d é Inverno.\n", mes);
            break;
        case 10 ... 12:
            printf("A estação do ano correspondente ao mês %d é Primavera.\n", mes);
            break;
        default:
            printf("Mês inválido. Por favor, digite um número entre 1 e 12.\n");
    }

    return 0;
}
