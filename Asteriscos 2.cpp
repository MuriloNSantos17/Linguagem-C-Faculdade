#include<stdio.h>
#include<conio.h>

	int main()
	{
		int i, j; 
		int k, l; 
		
		j= 1;
		
		l = 1; 
		
		printf("Digite a Quantidade de * que voce deseja Imprimir: na Horizontal "); 
		scanf("%d",&i); 
		printf("Digite a Quantidade de * que voce deseja Imprimir na Vertical:"); 
		scanf("%d",&k);
		
				
				
		for(l=1;l<=k;l++) 
		{		
					for(j=1;j<=i;j++) // enquanto i for != 0 e j < i de um printf e J some 1 até j ser <= i ; 
					{
						printf("*"); 
						
					}
		
			printf("\n"); 
		}
	}
