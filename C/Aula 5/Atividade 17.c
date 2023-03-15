#include <stdio.h>

int v[10],i;

int main()
{
	
	for(i=1;i<=10;i++)printf("Digite valor da %dº posicao @$:",i)&&scanf("%d",&v[i]);
	for(i=1;i<=10;i++)v[i] = (v[i]<=0)? 0:v[i];
	printf("Values:\n");
	for(i=1;i<=10;i++)printf("%d\n",v[i]);
}
