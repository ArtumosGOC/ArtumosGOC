#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	int nota[4],i, media;
	
	for(i=0;i<4;i++)
	{
		printf("Digite a %d° nota: ",(i+1));
		scanf("%d", &nota[i]);
		media += nota[i];
	}
	
	media -= 1;
	media  = media/4;
	printf("A média do aluno foi:%d", media);
}

