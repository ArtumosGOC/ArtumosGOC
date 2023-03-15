#include <stdio.h>

int v[10];

int main()
{
	int aux,f;
	for(int i=0;i<=10;i++)
	{
		printf("escreva um valor interiro para a %dº posicao: ",i);
		scanf("%d",&v[i]);
	}
	aux=v[0];
	for(int i=0;i<=10;i++)
	{
		if(v[i]>aux)
		{
			aux = v[i];
			f = i;
			printf("%d\n",i);
		}
		
	}
	printf("O maior valor, datado como: %d\nE encontrada na %dº posicao" ,v[f],f);
}
