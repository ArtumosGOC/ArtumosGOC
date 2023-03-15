#include <stdio.h>
#include <math.h>

float init[10],final[10];

int main()
{
	for(int i=1;i<=10;i++)printf("Digite o %dº valor: ", i)&&scanf("%f", &init[i]);
	for(int i=1;i<=10;i++)final[i]=powf(init[i],2);
	for(int i=1;i<=10;i++)printf("%dº, %.2f^2 = %.2f\n",i,init[i],final[i]);
}
