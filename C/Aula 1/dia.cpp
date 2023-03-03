#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	int dia,mes,ano;
	printf("Digite a data: ");
	scanf("%d/%d/%d", &dia,&mes,&ano);
	fflush(stdin);
	
	printf("%d/%d/%d",ano,mes,dia);
}
