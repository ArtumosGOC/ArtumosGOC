#include <stdio.h>
#include <locale.h>

main (){
	setlocale(LC_ALL,"Portuguese");
	
	int inteiro = 2.97;
	fflush(stdin);
	printf("%d \n", inteiro);//printa somente a parte inteira.
	
	float flutuante = 2.97;
	fflush(stdin);
	
	printf("%f \n", flutuante);//printa parte flutuante.
	printf("explicacao no código");
	
	/*
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////
	A explicação é bem simples, a variavel inteira(int) não armazena numeros quebrados ou seja com uso de virgulas.
	Essa linguagem leva o diferencial de ser muito especifica na hora de tratar suas var na hora de printar.
	
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////
	Tipos de var:
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////
	Modificadores de Tipos:
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////
	signed		caracter
	unsigned	inteiro
	long		longo
	short		curto
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////
	Palavra chave:		Tipo:										Tamanho:	Intervalo:
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////
	char				Caracter									1			-128 a 127;
	signed char			Caractere com sinal							1			-128 a 127;
	unsigned char		Caractere sem sinal							1			0 a 255;
	int					Inteiro										2   		-32.768 a 32.767;
	signed int			Inteiro com sinal							2			-32.768 a 32.767;
	unsigned int		Inteiro sem sinal							2			0 a 65.535;
	short int			Inteiro curto								2			-32.768 a 32 767;
	signed short int	Inteiro curto com sinal						2			-32.768 a 32.767;
	unsigned short int	Inteiro curto sem sinal						2			0 a 65.535;
	long int			Inteiro long								4			-2.147.483.648 a 2.147.483.647;
	signed long int		Inteiro longo com sinal						4			-2.147.483.648 a 2.147.483.647;
	unsigned long int	Inteiro longo sem sinal						4			0 a 4.294.967.295;
	float				Ponto flutuante com precisão simples		4			3.4 E-38 a 3.4E+38;
	double				Ponto flutuante com precisão simples		8			1.7 E-308 a 1.7E+308;
	long double			Ponto flutuante com precisão dupla longo	16			3.4E-4932 a 1.1E+4932;
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////
	tamanho 1 byte = 8 bits;
	
	*/
	
	
}
