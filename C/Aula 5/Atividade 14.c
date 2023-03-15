#include <stdio.h>

int v[10];

int main()
{
	int i,j;
	for(i=1;i<=10;i++)
	{
		printf("Digite o valor da %dº posicao:",i);
		scanf("%d",&v[i]);
	}
	for(i=0;i<=10;i++)
	{
		for(j=i+1;j<=10;j++)
		{
			if(v[i]==v[(j)])
			{
				printf("posicao %d e %d sao repidita, com o valor de %d \n",i,j,v[i]);
			}
		}
	}
}
