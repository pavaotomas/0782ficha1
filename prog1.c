#include <stdio.h>
void main(){
    //variaveis
    int receitas;
    int despesas;
    int saldo;


    // output a pedir o valor de receitas
    printf("Insira o valor recebido:\n"); 

    // input com o valor de receitas
    scanf( "%d", &receitas); 

    //output com o valor de despesas
    printf( "Insira o valor de despesas:\n"); 

    //input com o valor de despesas
    scanf("%d", &despesas); 


    // processo de calculo do saldo
   saldo = receitas - despesas; 

    // output do saldo
    printf("O seu saldo é:\n %d\n", saldo);
}