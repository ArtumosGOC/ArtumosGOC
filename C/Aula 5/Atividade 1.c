#include <stdio.h>

int lista[]= {1, 0, 5, -2, -5, 7};
int soma;

int main()
{
	soma = lista[0]+lista[1]+lista[5];
	lista[3]=100;
	for(int i;i<6;i++)printf("%d ", lista[i]);
}
