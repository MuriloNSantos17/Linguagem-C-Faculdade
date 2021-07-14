#include<conio.h>
#include<stdio.h>

	int main() 
	{
		int x; 
		int y; 
		
		int num[10]; 
		
		x=0; 
		y=1;
		
		for(x=0;x<=9;x++) 
		{
			
			num[x] = y; 
			
			y++; 
			
			printf("%d \n",num[x]);
		}
		
		
	}
