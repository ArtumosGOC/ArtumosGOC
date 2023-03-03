#include <stdio.h>
#include <locale.h>
main()
{
	
	setlocale(LC_ALL, "portuguese");
	float num1,num2,resultado;
	printf("Escreva numero 1: ");
	scanf("%f", &num1);
	printf("Escreva numero 2: ");
	scanf("%f", &num2);
	
	fflush(stdin);
	
	if(num1 == 0 || num2 == 0)printf("Impossivel de imprimir");
	
	else 
	{
		
		resultado = num1/num2;
		printf("o resultado é  %f", resultado);
	}
}
