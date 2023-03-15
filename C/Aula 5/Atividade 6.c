#include <stdio.h>

int v[10];

int main()
{
	int aux_min,aux_max;
	for(int i=1;i<=10;i++)
	{
		printf("escreva um valor interiro para a %dº posicao: ",i);
		scanf("%d",&v[i]);
	}
	aux_max=v[1];
	aux_min=v[1];
	for(int i=1;i<=10;i++)
	{
		if(v[i]>aux_max)
		{aux_max = v[i];}
		else if(v[i]<aux_min)
		{aux_min = v[i];}
	}
	printf("Minimo :%d Maximo:%d",aux_min ,aux_max );
}
