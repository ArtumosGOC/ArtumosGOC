#include <stdio.h>

int v[6];

int main()
{
	for(int i=1;i<=6;i++)
	{
		printf("Digite %dº valor inteiro:",i);
		scanf("%d",&v[i]);
	}
	for(int i=6;i>=1;i--)printf("%d\n",v[i]);
}
