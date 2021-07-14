#include<stdio.h>

	int main() 
	{
	
		int x,y; 
		
		y =0; //esta variavel sera uma constante sempre ficará em 0 
		 
		int i,j; 
		
		i = 0;
		j = 0;
		
		printf("Quantos * voce deseja Imprimir: "); 
		scanf("%d",&x);
		
		char valor[y][x]; // a partir do valor de x determino o tamanho final da matriz	 
		
			for(i=0;i<=x;i++)
			{
				valor[y][i] = '*'; // a cada rodada a matriz iniciada em 0,i , vai se alterando exceto pelo 0;
			}
			 
				for(j=0;j<x;j++)
				{
					printf("%c",valor[y][j]); //após isto ele imprime a matriz y,j
				}
	}
