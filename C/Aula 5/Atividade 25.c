#include <stdio.h>
#define max 100

unsigned int v[max];

int main()
{
	int i;
	for(i=1;i<=max;i++)
	{
		if((i%7)!=0&&(i%10)!=7)
		{
			v[i]=i;
		}
		printf("%d ",v[i]);
	}
	

}
