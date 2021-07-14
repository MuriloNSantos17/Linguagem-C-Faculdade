#include<stdio.h>
#include<conio.h>

//Criado por Murilo Santos AG 13434

	int main()
	{
		int  x,y; 
		
		int i,j,k,l; 
		
		
		
		i = 0;
		j = 0;
		k = 0;
		l = 0;
		
		printf("Digite a Quantidade de * na Horizontal: ");
		scanf("%d",&x);
		
		printf("Digite a Quantidade de * na Vertical: ");
		scanf("%d",&y); 
		
		
		
		
		char matriz[y][x]; 
		
			for(i=0;i<=y-1;i++)
			{
				for(j=0;j<=x-1;j++)
				{
					matriz[i][j] = '*';
				}
				
				
			}
		
						
						for(k=0;k<=y-1;k++)
						{
							for(l=0;l<=x-1;l++)
							{
								printf("%c",matriz[k][l]); 
							}
							
							printf("\n");
						}
		
	}
