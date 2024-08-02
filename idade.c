#include <stdio.h>



int main() {
    int idade;
    int resultado;
    char nome[100];
    printf("Digite sua idade!\n");
    scanf("%d", &idade);
    printf("Digite seu nome!\n");
    scanf("%s", &nome);
    resultado = idade * 365;
    printf("Seu nome e %s e voce ja viveu %d dias", nome ,resultado );
    return 0;
}