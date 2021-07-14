#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<unistd.h>

	void somar()
	{
		int x,y,resultado; 
		
		printf("<<< Voce escolheu Somar >>> \n");
		
		printf("Digite o Numero 1: \n");
		scanf("%d",&x);
		
		printf("Digite o Numero 2: \n");
		scanf("%d",&y); 
		
		resultado = x + y ;
		
		printf("O Resultado da Soma de %d e %d e: %d \n",x,y,resultado); 
		
		printf("\n");
		
		sleep(5); 
		
		system("cls"); 
		 
	}
	
	void subtrair()
	{
		int x,y,resultado; 
		
		printf("<<< Voce escolheu Subtrair >>> \n");
		
		printf("Digite o Numero 1: \n");
		scanf("%d",&x); 
		
		printf("Digite o Numero 2: \n"); 
		scanf("%d",&y); 
		
		resultado = x - y ; 
		
		printf("O Resultado da Subtraçao %d - %d e: %d \n",x,y,resultado); 
		
		printf("\n"); 
		
		sleep(5); 
		
		system("cls"); 
		 
		
	}
	
	void multiplicar()
	{
		int x,y,resultado; 
		
		printf("Digite o Numero 1: "); 
		scanf("%d",&x);
		printf("Digite o Numero 2: ");
		scanf("%d",&y); 
		
		resultado = x * y; 
		
		printf("Resultado de %d x %d e: %d \n",x,y,resultado); 
		
		sleep(5); 
		
		system("cls"); 
		 
	}
	
	void dividir()
	{
		float x,y,resultado; 
		
		printf("<<< Bem Vindo a Divisao >>>\n");
		printf("Digite o Numero 1: ");
		scanf("%f",&x);
		printf("Digite o Numero 2: "); 
		scanf("%f",&y); 
		
		resultado = x /y; 
	
		printf("O Resultado de %2.f / %2.f e: %.3f \n",x,y,resultado);
		
		sleep(5); 
		
		system("cls");
	}
	
	int main()
	{
		int opc;
		
		do
		{	
			printf("Digite 1 Para Somar \n");
			printf("Digite 2 Para Subtrair \n");
			printf("Digite 3 Para Multiplicar \n"); 
			printf("Digite 4 Para Dividir \n");
			printf("Digite 0 Para Sair \n"); 
			scanf("%d",&opc);	
			
			switch (opc)
			{
				case 1:
					somar();
				break; 
				
				case 2:
					subtrair(); 
				break;
				
				case 3:
					multiplicar();
				break; 
				
				case 4:
					dividir();
				break; 
			}
			
		} while(opc!=0);
			 
	}
