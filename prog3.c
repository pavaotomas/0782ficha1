#include <stdio.h>
void main(){
    //variaveis
    float consumo;
    float potencia=5.42;
    float kwh=0.16;
    float iva=0.18;
    float fim;

    printf("Insere o consumo de eletricidade:\n");

    scanf("%f", &consumo);

    fim = potencia + consumo * kwh;
    fim = fim * iva + fim;

    printf("O valor a pagar é: %.2f\n", fim);

}