#include<stdio.h>

void main()
{
    char nome[50];
    char sexo[50];
    int idade;

    printf("Digite seu nome:");
    gets(nome);

    printf("Digite seu sexo:");
    scanf("%s",sexo);

    printf("Digite sua idade:");
    scanf("%d",&idade);

    if(strcmp(sexo, "f")==0 || strcmp(sexo, "feminino")==0 || strcmp(sexo, "F")==0 || strcmp(sexo, "FEMININO")==0)
    {if(idade <= 25){printf("ACEITA");}}
    else {printf("NAO ACEITA");}

}
