#include <stdio.h>
#include <locale.h>// libs

main()
{
	setlocale(LC_ALL, "portuguese");// seta linguagem em portugues
	
	int n1,n2,n3,n4,soma;// nome das variaveis do tipo inteira usadas
	
	n1=1;n2=2;n3=4;n4=5;//valor de cada variavel
	soma=n1+n2+n3+n4;//var soma recebe n1+n2+n3+n4
	printf("O resultado é:%d \n", soma);//printa o resultado e converte %d na variavel especificada ao lado.
}
