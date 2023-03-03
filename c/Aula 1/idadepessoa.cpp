#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"portuguese");
	
	int a,b,x;
	
	printf("Ano que você nasceu:");
	scanf("%d",&a);
	fflush(stdin);
	
	printf("Ano que você está:");
	scanf("%d",&b);
	fflush(stdin);
	
	x=b-a;
	fflush(stdin);
	printf("Você tem %d anos de idade.", x);
}
