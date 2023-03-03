#include<stdio.h>

int main()
{
    char n[50];
    int a=0,e=0,i=0,o=0,u=0;
    printf("Digite seu nome:");
    scanf("%[^\n]",n);

    int k,l;
    l =strnlen(n, 50);
    for(k=0;k<=l;k++)
    {
        switch(n[k])
        {
            case ('a'):
                a++;
                break;
            case 'e':
                e++;
                break;
            case 'i':
                i++;
                break;
            case 'o':
                o++;
                break;
            case 'u':
                u++;
                break;
            case ('A'):
                a++;
                break;
            case 'E':
                e++;
                break;
            case 'I':
                i++;
                break;
            case 'O':
                o++;
                break;
            case 'U':
                u++;
                break;
        }
        
    }
    printf("Seu nome tem:%dA  %dE %dI %dO %dU",a,e,i,o,u);
}