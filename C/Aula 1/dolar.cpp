#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	float brl,usd,x;
	usd = 0.1879;
	printf("Digite o valor em R$: ");
	scanf("%f", &brl);
	fflush(stdin);
	x = brl * usd;
	fflush(stdin);
	printf("O valor do Real em Dolar é de %f USD", x);
}
