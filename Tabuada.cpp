
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
int main()
{
	
	int num1=0;
	int num2=0;
	int vet[11];
	
	for (num1=1; num1<11;num1++)
	{
		printf("tabuada do %d\n", num1); // Printando o numero da tabuada
		
		for(num2=1;num2<11;num2++) 
		{
		vet[num1]=(num1*num2);
		printf("%dX%d=%d\n",num1,num2, vet[num1]);
		vet[num1]=(num1*num2);
		
		}
		printf("\n");
	}
}
