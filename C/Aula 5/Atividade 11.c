#include <stdio.h>

float v[10],n[10],m[10];

int main()
{
	int i;
	float soma=0;
	for(i=1;i<=10;i++)printf("Digite o %dº valor:",i)&&scanf("%f",&v[i]);
	for(i=1;i<=10;i++)
	{

		if(v[i]<=0)
		{n[i]=v[i];}
		else
		{m[i]=v[i];soma+=v[i];}	
	}
	printf("A soma dos valores positivos sao: %.2f",soma);
	
}
