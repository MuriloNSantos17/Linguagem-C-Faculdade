#include<stdio.h>
#include<conio.h>

	int main () 
	{
		int x,y; //declara��o de vari�veis
		
		x = 1; // X e Y iniciam em 1 para imprimirem o valor correto
		y = 1;
		
		for(y=1;y<=5;y++) // este for faz com que o y repita o pr�ximo for at� 5 vezes no m�ximo 
		{
		
			for(x=1;x<=y;x++) //este for executa a impress�o do * at� que o x seja <= y(sendo que y vai ate 5) 
			{
				printf("*");
		
			}
			
				printf("\n"); // ap�s o segundo for terminar ele pula linha e recome�a tudo de novo
		}
	}
