#include<stdio.h>
#include<conio.h>

	int main() 
	{
		int num; 
		int x; 
		
		num = 1;
		x = 1;
		
		for(x=1;x<=10;x++) 
		{
			printf("Numero: %d \n",num); 
			
			num = num * -1; 
		}
	}
