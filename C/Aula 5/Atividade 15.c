#include <stdio.h>

int v[11];

int main()
{
	int i,j,n;
	int aux;
	for(i=1;i<=10;i++)
	{
		printf("Digite o valor da %dº posicao:",i);
		scanf("%d",&v[i]);
	}
	for(i=0;i<=10;i++)
	{
		for(j=i+1;j<=10;j++)
		{
			if(v[i]==v[j])
			{
				printf("posicao %d e %d sao repidita, com o valor de %d, %d removida \n",i,j,v[i],i);
				for(n=0;n<=10;n++)
				{
					if(v[i]>0)
					{
						v[i] = v[i+n];
						//v2[k]= v[i+n];
						//k++;	
					}	
				}
				
			}
		}
	}
	printf("Numeros Nao repitidos:\n");
	//aux=v[0];
	for (i=1; i< 10-1;i++)
    {
        for (j=1;j<10-j-1;j++)
        {   
            if (v[j] > v[j+1])
            {
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
	for(i=1;i<=10;i++)printf("Numero %d, na Posicao %d\n", v[i],i);

}
