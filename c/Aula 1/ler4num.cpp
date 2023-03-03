#include <stdio.h>
#include <locale.h>
#include <math.h>

int pegaint(int a, int b)
{
    int numero;
    numero = a / pow(10, b);
    numero = numero % 10;
    return numero;
}
main()
{
	setlocale(LC_ALL, "portuguese");
	int a,b;
	printf("Digite 4 numeros:");
	scanf("%d", &a);
	fflush(stdin);
	 
	for(int i=4;i>-1;i--)
	{
		if(i != 4 )
		{	
	 		b =pegaint(a, i);
	 		printf("%d \n",b);	 	
		}
	 }	
}

