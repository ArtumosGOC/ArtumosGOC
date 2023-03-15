#include <stdio.h>
int v[10],f[10],i,x;

int main()
{
	for(i=1;i<=10;i++)printf("Digite valor da %dº posicao @$:",i)&&scanf("%d",&v[i]);
	printf("Escreva o valor de X:");scanf("%d",&x);
	for(i=1;i<=10;i++)
	{
		if((v[i]%x)==0)printf("%d é multiplo de %d.\n",v[i],x);
		else printf("%d nao é multiplo de %d.\n",v[i],x);
		
	}
	
}
