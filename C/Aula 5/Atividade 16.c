#include <stdio.h>


int main()
{
	int i;

	float vf[5];
	int x;


	for(i=1;i<=5;i++)printf("Digite valor da %dº posicao @$:",i)&&scanf("%f",&vf[i]);
	printf("Escolha um numero de 0 a 2:$:");
	scanf("%d",&x);

	
	switch(x)
	{
		case 0:
			break;
		case 1:
			for(i=1;i<=5;i++)printf("%.2f ",vf[i]);
			break;
		case 2:
			for(i=5;i>=1;i--)printf("%.2f ",vf[i]);
			break;
		default:
			printf("numero fora do especificado");
			break;

	}
}
