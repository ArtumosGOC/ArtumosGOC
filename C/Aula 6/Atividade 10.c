#include<stdio.h>
#include<string.h>

int main()
{
    char p1[50],p2[50];

    printf("Digite uma palavra: ");
    gets(p1);

    printf("Digite outra palavra: ");
    gets(p2);

    if(strcmp(p1,p2)==0)
    {
        printf("sao iguais");
    }
    else
    {
        printf("nao sao iguais");
    }
}
