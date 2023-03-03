#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	float salario,bonus;
	
	salario = 1000;
	bonus = salario*(1+0.3);
	
	printf("Seu sálario e de %f e você teve um bonus dando o total de %f",salario,bonus);
}
