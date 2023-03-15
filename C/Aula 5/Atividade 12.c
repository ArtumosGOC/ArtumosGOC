#include <stdio.h>

int v[5];

int main()
{
	int aux_min,aux_max,mid;
	int i=1;
	for(i=1;i<=5;i++)
	{
		printf("escreva um valor interiro para a %dÂº posicao: ",i);
		scanf("%d",&v[i]);
		mid+=v[i];
	}
	aux_max=v[1];
	aux_min=v[1];
	for(i=1;i<=5;i++)
	{
		if(v[i]>aux_max)
		{aux_max = v[i];}
		else if(v[i]<aux_min)
		{aux_min = v[i];}
	}
	mid = (mid/5);
	for(i=1;i<=5;i++)
	{
		printf("Valores da %dº posicao:%d\n",i,v[i]);
	}
	printf("Minimo :%d Maximo:%d Media:%d",aux_min ,aux_max, mid);
}
