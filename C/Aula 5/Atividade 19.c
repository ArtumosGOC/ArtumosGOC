#include <stdio.h>



int main()
{
	int v[50],i;
	for(i=1;i<=50;i++)
	{
		v[i]=((i + 5*i)%(i + 1));
		printf("%d\n",v[i]);
	}	
}
