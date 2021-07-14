#include<conio.h>
#include<stdio.h>

	int main()
	{
		int x,y,z; 
		
		int num[10]; 
		
		x= 0 ; 
		y= 0 ;
		
		z=2; 
		
		for(x=0;x<=9;x++)
		{
			num[x] = z; 
			
			z *= 2; 	
		} 
		
		for(y=0;y<=9;y++)
		{
			printf("Valor %d : %d \n",y+1,num[y]) ; 
		}
	}
