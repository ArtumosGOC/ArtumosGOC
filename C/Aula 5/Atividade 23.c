#include <stdio.h>



int main()
{
	float a[5],b[5],c;
	int i;
	for(i=1;i<=5;i++)
	{
		printf("%dº Digite o valor de x:",i);
		scanf("%f",&a[i]);
		printf("%dº Digite o valor de y:",i);
		scanf("%f",&b[i]);
		c += a[i] * b[i];
	}
	printf("O produto escalar é:%.2f",c);
}
