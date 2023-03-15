#include <stdio.h>

int v[6];

int main()
{
	for(int i=1;i<=6;i++)
	{
		printf("Digite %dº valor par:",i);
		scanf("%d",&v[i]);
	}
	for(int i=6;i>=1;i--)
	{
		if((v[i]%2)==0)
		{
			printf("%d\n",v[i]);
		}
	}
	
}
