#include<stdio.h>
#include<conio.h>

	int main() 
	{
		int num; 
		int x;
		num = 1;
		
		do 
		{
			printf("%d \n",num); 
			
			num = num * -1; 
			
			x ++;  
		} while(x<=10); 
		
		return 0; 
	}
