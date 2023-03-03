#include <stdio.h>
#include <locale.h>
#include <math.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	int Ano_Atual, Ano_Nascimento,Idade_Atual,Idade_em_2026;
	printf("Ano que eu nasci:\n");
	scanf("%d", &Ano_Nascimento);
	printf("");
	printf("Ano atual:\n");
	scanf("%d", &Ano_Atual);
	Idade_Atual = Ano_Atual-Ano_Nascimento;
	Idade_em_2026 = 2026-Ano_Nascimento;
	
	printf("A sua idade atual é %d.\n",Idade_Atual);
	printf("A sua idade na copa de 2026 será de %d.\n",Idade_em_2026);
}
