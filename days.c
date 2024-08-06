#include <stdio.h>

int mes,dia,resultadoDias,resultadoTotal;
int totalDias = 30;

int main() {
    printf("Ola, vamos calcular quantos dias do ano ja passaram!Informe que dia do Mês\n");
    scanf("%d", &dia);
    printf("Escreva o mês do ano\n");
    scanf("%d", &mes);
    resultadoDias = mes * totalDias;
    resultadoTotal = resultadoDias + dia;
    printf("o total de dias que voce passou no ano e: %d", resultadoTotal);



    return 0;
}




//Entrar com o dia e o mês de uma data e informar quantos dias se passaram desde o início do ano. 
//Esqueça a questão dos anos bissextos e considere sempre que um mês possui 30 dias.