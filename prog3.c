#include <stdio.h>
void main(){
    //variaveis
    float consumo;
    float potencia=5.42;
    float kwh=0.16;
    float iva=0.18;
    float fim;

//output e input do consumo de eletricidade
    printf("Insere o consumo de eletricidade:\n");

    scanf("%f", &consumo);
//processo de calculo do valor de pagamento
    fim = potencia + consumo * kwh;
    fim = fim * iva + fim;
    
//output do valor depagamento
    printf("O valor a pagar é: %.2f\n", fim);

}