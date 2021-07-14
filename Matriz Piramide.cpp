#include<stdio.h>
#include<conio.h>


	int main() 
	{
		int i,j,k,l; 
		
		int x,y; 
		
		
		i,k,l = 0;
		j = 0; 
		
		printf("Digite o numero final de * : ");
		scanf("%d",&x); 
		
		y = x;
		
		char matriz[y][x];
		
		
		
			for(i=0;i<=x-1;i++)
			{
				for(j=0;j<=i;j++)
				{
					matriz[i][j] = '*'; 
				}
			}
			
			
			for(k=0;k<=x-1;k++)
			{
				for(l=0;l<=k;l++)
				{
					printf("%c",matriz[k][l]); 
				}
				
				printf("\n");
			}
	}
