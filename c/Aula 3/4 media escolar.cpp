#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"portuguese");
	float trabalho, prova, media;
	
	trabalho = 2.0;
	prova = 4.5;
	media = trabalho + prova;
	
	if(media >=8)
	{
		printf("%f\n", &media);
		printf("Aprovado parabens");
	}
	else
	{
		printf("%f\n", &media);
		printf("Ficou de exame...Estude mais!!!");
	}
}
