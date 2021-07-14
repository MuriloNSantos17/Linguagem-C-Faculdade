#include<stdio.h>
#include<conio.h>

	int main () 
	{
		int x,y; //declaração de variáveis
		
		x = 1; // X e Y iniciam em 1 para imprimirem o valor correto
		y = 1;
		
		for(y=1;y<=5;y++) // este for faz com que o y repita o próximo for até 5 vezes no máximo 
		{
		
			for(x=1;x<=y;x++) //este for executa a impressão do * até que o x seja <= y(sendo que y vai ate 5) 
			{
				printf("*");
		
			}
			
				printf("\n"); // após o segundo for terminar ele pula linha e recomeça tudo de novo
		}
	}
