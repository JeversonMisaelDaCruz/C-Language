#include <stdio.h>

int cavalos;
int resultadoCavalos;

int main() {
    printf("informe a quantidade de cavalos!\n");
    scanf("%d", &cavalos);
    resultadoCavalos= (cavalos*4);
    printf("A quantidade de ferraduras e: %d" , resultadoCavalos);

    return 0;
}