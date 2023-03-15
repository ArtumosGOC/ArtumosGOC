#include <stdio.h>

int v[5];

int main()
{
	int aux_min,aux_max,mid;
	int i=1;
	for(i=1;i<=5;i++)
	{
		printf("escreva um valor interiro para a %dº posicao: ",i);
		scanf("%d",&v[i]);
		mid+=v[i];
	}
	aux_max=v[1];
	aux_min=v[1];
	for(i=1;i<=5;i++)
	{
		if(v[i]>aux_max)
		{aux_max = i;}
		else if(v[i]<aux_min)
		{aux_min = i;}
	}

	printf("Posicao %d como menor, com valor %d\nPosicao %d como maior, com valor de %d.",aux_min ,v[aux_min],aux_max,v[aux_max]);
}
