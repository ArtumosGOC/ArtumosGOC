#include <stdio.h>
#include <locale.h>
#include <math.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	float raio,area;
	raio = 200;
	area = pow(M_PI,2)*raio;
	printf("sua area é de %f M²",area);
	
}
