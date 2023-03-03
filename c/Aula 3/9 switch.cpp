#include <stdio.h>
#include <locale.h>
#include <ctype.h>
main()
{
	setlocale(LC_ALL,"portuguese");
	int comida;
	printf("Escolha algo para comer:\n1.banana\n2.goiaba\n3.uva\n4.morango\n\nEscolha: ");
	scanf("%d",&comida);
	switch(comida)
	{
		case 1:
			printf("\nVocê comeu a banana.");
			break;
		case 2:
			printf("\nVocê comeu a goiaba.");
			break;
		case 3:
			printf("\nVocê comeu a uva.");
			break;
		case 4:
			printf("\nVocê comeu a morango.");
			break;
		default:
			printf("\nVocê fruta não está disponivel.");
			break;
	}
}
