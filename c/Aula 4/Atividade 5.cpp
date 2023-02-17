#include<stdio.h>
int main()
{
	int valor;
	printf("digite um numero inteiro de colunas:"); scanf("%d",&valor);

	int matrix[50][50];
	
	for(int i=1;i<=valor;i++)
	{

		for(int j=1;j<=i;j++)
		{
			matrix[j][i]=i*j;
			printf("%d\t",matrix[j][i]);
		}
		printf("\n");
	}
}