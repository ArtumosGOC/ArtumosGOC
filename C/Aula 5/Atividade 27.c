#include <stdio.h>
#define MAX 10

int v[MAX],x;


int main()
{


	int i,j;
	for(i=1;i<=MAX;i++)
	{
		printf("Digite o %dº numero:",i);
		scanf("%d",&v[i]);
	}
	printf("\n");
	for(i=1;i<=MAX;i++)
	{
		for(j=1;j<=v[i]/2;j++)
		{
 	   			if ((v[i]%(j+1)) == 0) 
				{
					printf("	%d Não é primo!\n",v[i]);
					break;
 	   			}
				else
				{
					printf("%d é primo!\n", v[i]);
					break;
				}
		}
	}
}
