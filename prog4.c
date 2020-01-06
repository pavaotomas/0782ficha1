#include <stdio.h>
void main(){
    //variaveis
    char nome[50];
    float teste1;
    float teste2;
    float teste3;
    float media;

//output e input do nome
printf("Insere o teu primeiro nome:\n");

scanf("%s", nome);

//output e input do teste1
printf("Insere a nota do teste 1:");
scanf("%f", &teste1);

//output e input do teste2
printf("Insere a nota do teste 2:");
scanf("%f", &teste2);
// output e input do teste3
printf("Insere a nota do teste 3:");
scanf("%f", &teste3);

//processo de calculo da media
media = teste1*0.25 + teste2*0.35 + teste3*0.40;

//output do nome e media final
printf("Nome: %s \n Média: %.2f \n", nome, media);
}