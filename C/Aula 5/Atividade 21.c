#include <stdio.h>

int a[10],b[10],c[10];

int main()
{
	int i;
	for(i=1;i<=10;i++)
	{
		printf("%dº A:",i);
		scanf("%d",&a[i]);
		printf("%dº B:",i);
		scanf("%d",&b[i]);

		c[i] = a[i] - b[i];
	}
	for(i=1;i<=10;i++)printf("%dº, A-B=%d\n",i,c[i]);
	
}
