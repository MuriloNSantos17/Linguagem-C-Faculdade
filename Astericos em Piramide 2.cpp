#include<conio.h>
#include<stdio.h>

	int main() 
	{
		int x,y,z;
	
		printf("Digite a Quantidade de Asteriscos Final: "); 
		scanf("%d",&x); //no scanf recebo a Quantidade final 
		
		y=1; //inicio as duas variaveis em 1
		z=1; 
		
		for(z=1;z<=x;z++) //o primeiro contador vai ser executado at� o valor de Z ser <= a X
		{
				for(y=1;y<=z;y++) // este contador ir� executar toda rodada at� y <= z , e toda vez que o valor cair aqui Y iniciar� em 1 
				{
					printf("*"); 
				}
				
				printf("\n"); // pulo linha ap�s o segundo FOR ser terminado
		}
	}

