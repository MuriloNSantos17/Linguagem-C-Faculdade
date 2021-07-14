#include<stdio.h>
#include<conio.h>

	int main() 
	{
		int x,y,z;
		
		int num[10]; 
		
		x=0; 
		z=0; 
		
		y = 1; 
		
		for(x=0;x<=9;x++)
		{
			num[x] = y;
			
			y = y * -1 ;  
		}
		
			for(z=0;z<=9;z++) 
			{
				printf("%d \n",num[z]); 
			}
	}
