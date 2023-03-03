#include <stdio.h>
#include <ctype.h>
#include<string.h>

int main()
{
    char n1[50],n2[50];
    scanf("%[^\n]",n1);

    int i, l = strnlen(n1, 50);
    for (i=0;i<=l;i++)n1[i] = toupper(n1[i]);
    

    strcpy(n2,n1);

    strrev(n2);
    
    if(strcmp(n1,n2)==0) printf("essa palavra e um palindromo.");

    else 
    {
        printf("essa palavra nao e um palindromo.");
    }


    

}
