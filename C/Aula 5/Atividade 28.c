#include<stdio.h>
#define MAX 10

int v[MAX],vp[MAX],vi[MAX];

int main()
{
    for (int i = 1; i <= MAX; i++)
    {
        printf("Digite o valor da %dº posicao:",i);
        scanf("%d",&v[i]);

        if ((v[i]%2)==0)vp[i]=v[i];
        else
        {vi[i]=v[i];}

    } 
    for (int i = 1; i <= MAX; i++)
    {
        if (vp[i]!=0)printf("P%d\n",vp[i]);
        if (vi[i]!=0)printf("IMP%d\n",vi[i]);
    }
    
}