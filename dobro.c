#include <stdio.h>

int main() {

    int numero;
    int dobro;
    int resultadoDobro;
    int resultadoTriplo;



    printf("Digite um numero\n");
    scanf("%d", &numero);
    if(numero>0){
        resultadoDobro = numero * 2;
        printf(" o seu numero e positivo logo sera multiplicado: %d",resultadoDobro);
    }else{
        resultadoTriplo = numero * 3;
        printf(" O seu numero e negativo logo sera triplicado:  %d  ", resultadoTriplo);
    }

    return 0;
}






//4. Encontrar o dobro de um número caso ele seja positivo e o seu triplo caso seja negativo, imprimindo o resultado.