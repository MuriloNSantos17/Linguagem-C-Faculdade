#include<conio.h>
#include<stdio.h>

	int main() 
	{
		int x, y; 
		
		int valor_1[4];
		int valor_2[4]; 
		
		x= 0; 
		y= 0;
		
		for(x=0;x<=3;x++)
		{
			printf("Digite o Valor %d : ",x+1); 
			scanf("%d",&valor_1[x]); 
		}
		
		printf("\n"); 
		
			for(y=0;y<=3;y++)
			{
				valor_2[y] = valor_1[y]; 
				
				printf("Valor 2: na posicao %d e %d \n",y+1,valor_2[y]); 
			}
	}
