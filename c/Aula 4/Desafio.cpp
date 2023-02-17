#include<stdio.h>
int main()
{
    int num,fib[4],i,n;
    
    
     
    printf("Digite o numero para a tabela de Fib:");  scanf("%d",&num);

    if(num<=2)
    {
        for(n=1;n<=num;n++)fib[n]=(n-1); 
        for(n=1;n<=num;n++)printf("%d ",fib[n]);
    }
    else
    {
        for(n=1;n<=2;n++)fib[n]=(n-1); 
        for(n=1;n<=2;n++)printf("%d ",fib[n]);
    }

    for(i=2;i<num;++i)
    {    
        fib[3]=fib[1]+fib[2];    
        printf("%d ",fib[3]);    
        fib[1]=fib[2];    
        fib[2]=fib[3];    
    }  
}