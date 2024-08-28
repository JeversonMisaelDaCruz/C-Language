#include <stdio.h>

int main() {
    int idade;



    printf("Informe a idade do atleta\n");
    scanf("%d",&idade);
    switch (idade) {
        case 5 ... 10:
            printf(" Atleta junior\n");
        break;

        case 11 ... 15:
            printf("Atleta Juvenil\n");
        break;
        case 16 ... 20:
            printf("Atleta Junior\n");
        break;
        case 21 ... 25:
            printf("Atleta Profissional\n");
        break;
    }
    return 0;
}
