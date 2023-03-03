#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	float base,altura,area;
	base=50;
	altura=20;
	
	area = (base*altura)/2;
	printf("A area do triando é:%f",area);
}
