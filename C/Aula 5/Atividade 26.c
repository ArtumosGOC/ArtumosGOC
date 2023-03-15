#include <stdio.h>
#include <math.h>
#define MAX 10



int main()
{
	float v[MAX],m,sigma,f;
	int i;
	for(i=1;i<=MAX;i++)
	{
		printf("Digite o %dº valor:", i);
		scanf("%f", &v[i]);
		m+= v[i];
	}
	m = m/MAX;
	for(i=1;i<=MAX;i++)
	{
		sigma += pow((v[i]-m),2);
	}
	f = sqrt(1/(MAX-1)*sigma);
	printf("%.2f",f);
}
