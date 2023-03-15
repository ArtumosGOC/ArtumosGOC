#include <stdio.h>


int vetor[6];

int main()
{
	for(int i=1;i<=6;i++)printf("Digite o %dº valor: ", i)&&scanf("%d", &vetor[i]);
	for(int i=1;i<=6;i++)printf("Valor da %dº posicao e:%d\n",i,vetor[i]);
}
