#include<stdio.h>
main()
{
	int num;
	printf("Digite o numero a fatorar:"); scanf("%d!", &num);
	int value;
	
	for(value = 1; num > 1; num = num - 1)value = value * num;
	printf("%d",value);
}
