#include <stdio.h>
void main(){
    //variaveis
    char nome[50];
    float teste1;
    float teste2;
    float teste3;
    float media;

printf("Insere o teu primeiro nome:\n");

scanf("%s", nome);

printf("Insere a nota do teste 1:");
scanf("%f", &teste1);

printf("Insere a nota do teste 2:");
scanf("%f", &teste2);

printf("Insere a nota do teste 3:");
scanf("%f", &teste3);

media = teste1*0.25 + teste2*0.35 + teste3*0.40;

printf("Nome: %s \n Média: %.2f \n", nome, media);
}