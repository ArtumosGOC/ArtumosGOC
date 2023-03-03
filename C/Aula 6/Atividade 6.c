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
                n[k]= '4';
                break;
                
            case 'e':
                e++;
                n[k]= '3';
                break;
            case 'i':
                i++;
                n[k]= '1';
                break;
            case 'o':
                o++;
                n[k]= '0';
                break;
            case 'u':
                u++;
                n[k]= 'V';
                break;
            case ('A'):
                a++;
                n[k]= '4';
                break;
            case 'E':
                e++;
                n[k]= '3';
                break;
            case 'I':
                i++;
                n[k]= '1';
                break;
            case 'O':
                o++;
                n[k]= '0';
                break;
            case 'U':
                u++;
                n[k]= 'V';
                break;
        }
        
    }
    printf("Seu nome tem:%dA  %dE %dI %dO %dU\n",a,e,i,o,u);
    printf("%s",n);
}