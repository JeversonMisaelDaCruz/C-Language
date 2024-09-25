// aça um algoritmo que receba uma data no formato DDMMAAAA e escreva qual a estação do ano correspondente
// (Primavera, Verão, Outono, Inverno).

#include <stdio.h>

int main() {
    int dia, mes, ano;

    printf("Digite a data no formato DDMMAAAA: ");
    scanf("%2d%2d%4d", &dia, &mes, &ano);

    if ((mes == 12 && dia >= 21) || (mes == 1) || (mes == 2) || (mes == 3 && dia <= 20)) {
        printf("Verão\n");
    } else if ((mes == 3 && dia >= 21) || (mes == 4) || (mes == 5) || (mes == 6 && dia <= 20)) {
        printf("Outono\n");
    } else if ((mes == 6 && dia >= 21) || (mes == 7) || (mes == 8) || (mes == 9 && dia <= 22)) {
        printf("Inverno\n");
    } else if ((mes == 9 && dia >= 23) || (mes == 10) || (mes == 11) || (mes == 12 && dia <= 20)) {
        printf("Primavera\n");
    } else {
        printf("Data inválida!\n");
    }

    return 0;
}

