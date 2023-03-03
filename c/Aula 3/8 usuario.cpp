#include <stdio.h>
#include <locale.h>
#include <time.h>

void delay(float segundos)
{
    float tempo = 1000 * segundos;
    clock_t inicio = clock();
    while (clock() < inicio + tempo);
}

main()
{
	int value, port, porcent,spawmvalue;
	char ip[50];
	
	setlocale(LC_ALL, "portuguese");
	printf("Selecione uma opção:\n1.Metasploit.\n2.Nmap.\n3.SQLInjection.\n4.Spammer.\n\n");
	printf("Escolha: ");
	scanf("%d", &value);
	printf("\n\n");
	
	if(value > 4)
	{
		printf("Valor não catalogado!\n");
	}
	else if(value == 1)
	{
		printf("Digite o ip do ataque e a porta(Eternalblue_ms17-010): ");
		scanf("%s %d",&ip,&port);
		fflush(stdin);
		printf("Conectado na maquina %s:%d\nShell:",ip,port);
		
	}
	else if(value == 2)
	{
		printf("Digite o ip e a porta para scanear: ");
		scanf("%s %d",&ip,&port);
		for(porcent = 0; porcent <101;porcent++)
		{
			delay(0.06);
			printf("Scaneamento em %d/100\n",porcent);
		}
		printf("\n\n\n\n");
		printf("Scan completo!!\nSystem:Unknow\nName_System:Windows-OS\n---------------\nPotas abertas:\nFTP:22\nHTTPS:443\nHTTP:80\nSH:21\nRDP:3389\n---------------\nTarefa feita");
		
	}
	else if(value == 3)
	{
		printf("Digite o endereço: ");
		scanf("%s",&ip);
		printf("Verificndo falhas SQLInjection\n");
		delay(1);
		for(porcent = 0; porcent <101;porcent++)
		{
			delay(0.06);
			printf("%d/100\n",porcent);
		}
		printf("Não a falhas!! ;/");
	}
	else if(value == 4)
	{
		printf("Seu ataque:\n1.Whatsapp\n2.Email\n3.Telegram\n\n");
		printf("Escolha: ");
		scanf("%d",&value);
		printf("Avaliando metodo");
		delay(3);
		fflush(stdin);
		
		if(value > 3)
		{
			printf("Valor não catalogado!\n");
		}
		if(value == 1)for(;;){printf("Feche o programa para parar o ataque no Whatsapp\n");};
		if(value == 2)for(;;){printf("Feche o programa para parar o ataque no Email\n");};
		if(value == 3)for(;;){printf("Feche o programa para parar o ataque no Telegram\n");};
			
	}
}

