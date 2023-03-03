#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	int nota1,nota2,nota3,soma,media;
	
	nota1 = 60;
	nota2 = 55;
	nota3 = 70;
	
	soma = nota1+nota2+nota3;
	media = soma/3;
	printf("O Valor da média é de %d pontos", media);
	
}
