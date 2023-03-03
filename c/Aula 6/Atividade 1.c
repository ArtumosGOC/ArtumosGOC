#include<stdio.h>
#define STRING 50
char str[STRING];

void main(int argc,char**argv)
{
    printf("Coloque Seu Nome :$:");
    scanf("%[^\n]",str);
    printf("As 4 primeiras letras do seu nome:%.4s",str);
}