#include <stdio.h>

int main()
{
	float a[10],b[10],aux_min,aux_max,al_min,al_max;
	int i;
	for(i=1;i<=10;i++)
	{
		printf("%dº Numero do aluno:",i);
		scanf("%f",&a[i]);

		printf("%dº Altura do aluno:",i);
		scanf("%f",&b[i]);

	}
	
	aux_min=b[1];
	aux_max=b[1];

	for(i=1;i<=10;i++)
	{
		if(aux_min>b[i])
		{
			aux_min = b[i];
			al_min = a[i];
		}
		if(aux_max<b[i])
		{
			aux_max = b[i];
			al_max = a[i];
		}
		
	}


	printf("O numero %.0fº possui menor altura com %.2fcm.\n",al_min,aux_min);
	printf("O numero %.0fº possui maior altura com %.2fcm.",al_max,aux_max);
}
