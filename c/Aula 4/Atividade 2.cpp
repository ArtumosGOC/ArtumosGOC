#include<stdio.h>
main()
{
	
	int h=0,aux=0;
	int impar[100],par[100],f_impar=1,f_par=1;
	printf("Digite a quantidade de numero:"); scanf("%d", &h);
	
	for(aux;aux <= h;aux++)
	{
		if((aux%2)==0){
			par[aux]= aux;
			impar[aux]= 1;
		}
		else
		{
			par[aux]= 1;
			impar[aux]= aux;
		}
		par[0]= 1;
	}
	
	for(aux=0;aux <= h;aux++)
	{	
		f_par *=par[aux];
		f_impar *=impar[aux];
		
	}
	printf("Numeros:\n\tImpares:\rPares:\n\t%d\r%d\n",f_impar,f_par);
	

	
}
