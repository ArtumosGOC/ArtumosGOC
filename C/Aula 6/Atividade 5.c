#include <stdio.h>

int main()
{
    char NOME[50];
    printf("Digite seu nome:");
    scanf("%[^\n]",NOME);


    
    int i;
    for(i=(strnlen(NOME, 50));i>=0;i--)
    {
        printf("%c",NOME[i]);
    }

}