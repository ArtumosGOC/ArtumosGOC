#include <stdio.h>

int v[10];


int main()
{
	int Epar=0;
	for(int i=1;i<=10;i++)
	{
		printf("escreva um valor interiro para a %dº posicao: ",i);
		scanf("%d",&v[i]);
		printf("%d\n",v[i]);
		Epar += ((v[i]%2)==0)?1:0;
		
	}
	printf("Entre os numeros digitados %d sao pares",Epar);
}
