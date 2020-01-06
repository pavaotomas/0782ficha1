#include <stdio.h>
void main(){
    //variaveis

 int salario;
 int alimentacao;
 int descontos;
 int liquido;

//output a pedir salario bruto
printf("Insere o Salario Bruto:\n");

//input do salario bruto
scanf("%d", &salario);

//output a pedir alimentacao
printf("Insira o subsidio de alimentação:\n");

//input para inserir alimentacao
scanf("%d", &alimentacao);
 
//output a pedir descontos
printf("Insere o valor dos descontos:\n");

//input do valor dos descontos 
scanf(" %d", &descontos);

// processo do calculo do liquido
liquido = salario - descontos;

//output do valor do liquido
printf("O valor do Salario Liquido é:\n %d\n", liquido);


}