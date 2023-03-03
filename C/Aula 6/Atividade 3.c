#include<stdio.h>

int main()
{

    char nome[50];
    printf("Digite um nome:");
    scanf("%[^\n]",nome);

    printf("%d",strnlen(nome));
}
