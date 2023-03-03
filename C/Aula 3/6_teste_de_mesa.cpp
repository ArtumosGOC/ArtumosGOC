#include<stdio.h>//biblioteca resonsavel pelas funï¿½ï¿½es usadas
 int main()//metodo vazio main()
 {
 	float nota_trab = 6.0, prova = 5.0, exame = 8.0, media;// aqui todas as variaveis vï¿½o atribuir os valores ditos
 	char conceito;//variavel de caractere vazia
 	
 	nota_trab = nota_trab * 2;// nota_trab multiplica ele mesmo por 2 e recebe nele mesmo exemplo 10*2=20
 	prova = prova * 3;// prova multiplica ele mesmo por 3 e recebe nele mesmo exemplo 3*3=9
 	exame = exame * 5;// exame multiplica ele mesmo por 5 e recebe nele mesmo exemplo 7*5=35
 	media = (nota_trab + prova + exame)/10; // a media recebe a soma de nota_trab+prova+exame e divide por 10 exemplo (5+4,9+0,1)/10=1
	 
 	if ((media >= 8) && (media <=10))conceito = 'A';//se media maior ou igual a 8 e media menor ou igual a 10 faca conceito receber o caractere A
 	if ((media >= 7) && (media < 8))conceito = 'B';//se media maior ou igual a 7 e media menor a 8 faca conceito receber o caractere B
 	if ((media >= 6) && (media < 7))conceito = 'C';//se media maior ou igual a 6 e media menor ou igual a 7 faca conceito receber o caractere C
 	if ((media >= 5) && (media < 6))conceito = 'D';//se media maior ou igual a 5 e media menor ou igual a 6 faca conceito receber o caractere D
 	if ((media >= 0) && (media < 5))conceito = 'E';//se media maior ou igual a 0 e media menor ou igual a 5 faca conceito receber o caractere E
 	
 	/*IMPRIMA	 "nota trabalho = variavel nota_trab quebra de linha prova = variavel prova quebra de linha exame = variavel exame prova quebra media = variavel media" 
	*/
 	printf("nota trabalho = %f \n prova = %f \n exame = %f \n media = %f\n", nota_trab, prova, exame, media);
	//imprima "O conceito do aluno é variavel conceito"
 	printf("O conceito do aluno é %c\n", conceito);
 }
