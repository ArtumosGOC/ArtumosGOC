#include<stdio.h>
#include<math.h>
main()
{	
	float juros=0.005,aux;
	float valor_inicial,valor_mensal,meses;
	
	printf("digite o investimento inicial:"); scanf("%f",&valor_inicial);
	printf("digite o investimento mensal:"); scanf("%f",&valor_mensal);
	
	printf("quanto meses:"); scanf("%f",&meses);
	
	for(int i=0;i<=meses;i++)aux= valor_inicial*juros*i; aux = juros+valor_inicial+aux;
	printf("%.2f",aux);
	
	
}
