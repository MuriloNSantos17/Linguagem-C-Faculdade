#include<stdio.h>
#include<conio.h>

	int main()
	{
		float nota[5]; 
		int x;
		x=0;
		
			for(x=0;x<=3;x++)
			{
				printf("Digite a Nota: %d ",x+1); 
				scanf("%f",&nota[x]); 
			}
		
				nota[4] = (nota[0] + nota[1] + nota[2] + nota[3]) /4 ; 
			
			
						printf("\n"); 
						
						printf("A Media e: %f",nota[4]); 
	}
