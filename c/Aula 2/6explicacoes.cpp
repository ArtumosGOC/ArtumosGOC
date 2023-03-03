#include <stdio.h>//lib principal do programa
#include <locale.h>//lib de linguaguem ASCII auxilia a stdio.h
#include <math.h>//lib de matematica
//libs

main()
{
	setlocale(LC_ALL,"portuguese");//seta linguagem do teclado em utf-8
	float num = 2,quadrado;//seta como ponto flutuante num como 2 e quadrado deixa vazia
	quadrado=pow(num,2);//eleva num ao quadrado
	printf("O resultado é:%f\n",quadrado);//printa o resultado e converte %f na variavel especificada ao lado.
}
