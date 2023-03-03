/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

main()
{
	float valorHora;
	float qtdHora;
	float salario;
	
	printf("Valor Horas:");
	scanf("%f", &valorHora);
	fflush(stdin);
	
	printf("Quantidade Hora:");
	scanf("%f", &qtdHora);
	fflush(stdin);
	
	salario = qtdHora*valorHora;
	
	printf("Salario: %f", salario);
}
