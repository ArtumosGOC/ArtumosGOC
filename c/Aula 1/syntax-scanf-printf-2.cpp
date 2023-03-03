/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

main()
{
	char nome[50];
	char genero;
	
	printf("Nome: ");
	scanf("%[^\n]", &nome);
	fflush(stdin);
	
	printf("Genero(Masculino[M] / Feminino[F]):\n");
	scanf("%s", &genero);
	fflush(stdin);
	
	printf("Nome: %s \n", nome);
	printf("Genero: %c",genero);
}
