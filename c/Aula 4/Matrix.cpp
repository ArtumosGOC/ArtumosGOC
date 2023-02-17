#include<stdio.h>
int main()
{
	int a,b;
	printf("Digite valor de \nA e B:\n"); scanf("%d %d",&a,&b);
	b +=10;
	int matrix[50][50];
	
	for(int i=0;i<=a;i++)for(int j=0;j<=b-10;j++)
	{matrix[j][i] = j*i;if(i>=10)matrix[j][i] = j*i;}
	
	for(int i=0;i<=a;i++)
	{
		for(int j=0;j<=b-10;j++)printf("%d\t",matrix[j][i]);
		printf("\n");
	}
	
}
