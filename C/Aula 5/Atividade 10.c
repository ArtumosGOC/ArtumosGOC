#include <stdio.h>

int v[16];

int main()
{
	for(int i=1;i<=15;i++)
	{
		printf("Digite %dº valor par:",i);
		scanf("%d",&v[i]);
		v[16] += v[i];
	}
	printf("A media geral dos alunos foi de %d pontos",(v[16]/15));
}
