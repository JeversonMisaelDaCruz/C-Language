#include <stdio.h>

int main() {
    char letra;

    printf("Digite uma letra: ");
    scanf(" %c", &letra);

    switch (letra) {
        case 'a': case 'A':
        case 'e': case 'E':
        case 'i': case 'I':
        case 'o': case 'O':
        case 'u': case 'U':
            printf("Vogal\n");
            break;
        default:
            if ((letra >= 'a' && letra <= 'z') || (letra >= 'A' && letra <= 'Z')) {
                printf("Consoante\n");
            } else {
                printf("Erro: Não é uma letra válida\n");
            }
    }

    return 0;
}
