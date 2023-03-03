#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int a,b,c,d,e,soma;
	printf("Informe quatro números, em sequência:\n");
	scanf("%d",&a);
	fflush(stdin);
	
	scanf("%d",&b);
	fflush(stdin);
	
	scanf("%d",&c);
	fflush(stdin);
	
	scanf("%d",&d);
	fflush(stdin);
	
	scanf("%d",&e);
	fflush(stdin);
	
	soma = a+b+c+d+e;
	printf("Resultado da soma: %d", soma);
}
