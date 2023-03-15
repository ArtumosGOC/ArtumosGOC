#include <stdio.h>

int v[10],im[10];

int main()
{
	int i,aux=0;
	printf("Escreva Numeros no intervalo  de [0-50]\n");
	for(i=1;i<=10;i++)
	{
		printf("Para a %dº posicao: ",i);
		scanf("%d",&v[i]);
		if(v[i]<=50&&v[i]>=0)
		{
			if((v[i]%2)!=0)
			{
				im[aux] = v[i];
				aux++;
			}
		}
		else if(v[i]>50)
		{
			v[i]=50;
		}
		else if(v[i]<0)
		{
			v[i]=0;
		}
		
	}
	aux--;
	for(i=1;i<=10;i++)printf("Numeros Digitados:%d\n",v[i]);
	for(i=0;i<=aux;i++)printf("Numeros Impares Detectados:%d\n",im[i]);

}
