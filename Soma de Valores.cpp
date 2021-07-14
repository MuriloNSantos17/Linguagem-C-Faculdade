#include<stdio.h>
#include<conio.h>
	
	int main() 
	{
	
		int num[2]; 
		
		int i,calc;
		
		i =0; 
		
		calc =0; 
		
		for(i=0;i<=1;i++)
		{
			printf("Digite o Numero %d : ",i+1); //entrada de dados
			scanf("%d",&num[i]); 
			
			calc = calc + num[i]; //Processamento
		}
		
		printf("\n"); // Pula Linha
		printf("A Soma Absoluta dos Valores e: %d",calc); // saída de dados 
	}
