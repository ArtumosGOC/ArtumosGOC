#include <stdio.h>
#include <math.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	float PI = M_PI;
	fflush(stdin);
	printf("Valor de PI é: %f",PI);
	
}