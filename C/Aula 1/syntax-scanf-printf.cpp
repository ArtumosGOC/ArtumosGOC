/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

main()
{
    int idade;
    float salario;
    char nome[50];
    
    printf("Digite o Nome: ");
    scanf("%[^\n]",&nome);
    fflush(stdin);
    
    printf("Digite a idade: ");
    scanf("%d",&idade);
    fflush(stdin);
    
    printf("Digite o salario: ");
    scanf("%f",&salario);
    fflush(stdin);
    
    printf("\nNome: %s \n",nome);
    printf("Idade: %d \n", idade);
    printf("Salario: %f \n", salario);
}

