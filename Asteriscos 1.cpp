#include<stdio.h>
#include<conio.h>

	int main()
	{
		int i, j; 
		
		j=1;
		
		printf("Digite a Quantidade de * que voce deseja Imprimir: "); 
		scanf("%d",&i); 
		
		
		for(i!=0;j<=i;j++) // enquanto i for != 0 e j < i de um printf e J some 1 até j ser <= i ; 
		{
			printf("*"); 
		}
	}
