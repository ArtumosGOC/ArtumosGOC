#include <stdio.h>

float v[8];

int main()
{
	for(int i=1;i<=8;i++)((i%2)==0)?printf("Y:")&&scanf("%f",&v[i]):printf("X:")&&scanf("%f",&v[i]);
	for(int i=1;i<=8;i++)((i%2)==0)?printf("%f",(v[(i-1)]+v[i])):printf("\n");
}
