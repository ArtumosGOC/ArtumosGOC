#include<stdio.h>
#include<string.h>

int main()
{

    char p[50];
    printf("Digite uma palavra:");
    scanf("%[^\n]",p);

    int num =strlen(p);
    printf("%d",num);
}
