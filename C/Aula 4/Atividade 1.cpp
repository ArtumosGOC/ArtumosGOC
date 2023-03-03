#include<stdio.h>
main()
{
	int qtde,num;
	printf("Digite a quantidade de numero desejado:\n"); scanf("%d",&qtde);
	
	int meunumero[qtde];
	for(int i=0;i<=qtde;i++)
	{
		printf("Digite a valor a atribuir na posicao %d:\n",i); scanf("%d",&meunumero[i]);
		
	}
	
	num = meunumero[0];
	for(int i=0;i<=qtde;i++)if(num>meunumero[i])num=meunumero[i];
	printf("O menor numero vai ser: %d", num);
}
