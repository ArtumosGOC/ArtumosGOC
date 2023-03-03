#include<stdio.h>

int main()
{
    char nome[50];

    printf("Digite seu nome:");
    scanf("%[^\n]",nome);
    if(nome[0]=='a'||nome[0]=='A')printf("%s",nome);
    
}
