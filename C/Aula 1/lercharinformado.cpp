#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	
	char a;
	printf("Escreva um caractere:");
	scanf("%c", &a);
	
	printf("\nSeu caracter é: %c", a);
}
