

#include <stdio.h>

int main() {
    char estadoCivil;

    printf("Digite a primeira letra do seu estado civil (S, C, V, D): ");
    scanf(" %c", &estadoCivil);

    switch (estadoCivil) {
        case 'S':
        case 's':
            printf("Solteiro\n");
            break;
        case 'C':
        case 'c':
            printf("Casado\n");
            break;
        case 'V':
        case 'v':
            printf("Viúvo\n");
            break;
        case 'D':
        case 'd':
            printf("Divorciado\n");
            break;
        case 'Q':
        case 'q':
            printf("Desquitado\n");
            break;
        default:
            printf("Erro: Estado civil inválido\n");
    }

    return 0;
}
