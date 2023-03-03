/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

main()
{
	
	int b;
	for(int i=0; i < 100;i++)
	{
		printf("%d \n", i);
		b = i;
	}
	
	if(b = 100)
	{
		printf("HEHEHEHE %d \n", b);
	}
	
	while(b > 0)
	{
		printf("%d \n", b);
		b--;
	}
	printf("%d \n", b);
	
	do
	{
		printf("%d \n", b);
		b++;
	}while(b <= 100);	
	
}
