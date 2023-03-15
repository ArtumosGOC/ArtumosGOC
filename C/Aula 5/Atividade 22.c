#include <stdio.h>

int a[10],b[10],c[50],x=1,aux;

int main()
{
	int i,j;
	for(i=1;i<=10;i++)
	{
		printf("%dº| Digite um numero impar:",i);
		scanf("%d",&a[i]);
		printf("%dº| Digite um numero par:",i);
		scanf("%d",&b[i]);

	}
	for(i=1;i<=10;i++)
	{
		c[x]= a[i];
		//printf("%d\n",c[x]);
		x++;
	}
	for(i=1;i<=10;i++)
	{
		c[x]= b[i];
		//printf("%d\n",c[x]);
		x++;
	}
    for(i=0;i<x-1;i++)
    {
        for(j=0;j<x-i-1;j++)
        {   
            if (c[j]>c[j+1]) 
            {
                aux = c[j];
                c[j] = c[j+1];
                c[j+1] = aux;
            }
        }
    }
	for(i=1;i<=x;i++)if(c[i]!=0)printf("%d ",c[i]);
}
