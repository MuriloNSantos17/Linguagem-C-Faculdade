#include<stdio.h>
#include<conio.h>

	int main()
	{
		int num; 
		num = 2; 
		
		do
		{
			printf("Numero: %d \n",num); 
			
			num *= 2; 
		} while(num<=1024); 
		
		return 0;
	}
