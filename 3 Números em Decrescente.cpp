/*
	Murilo Nunes dos Santos 
	Fazer 3 Numeros em Decrescente.
*/

#include<stdio.h>
#include<conio.h>

	int main() 
	{
		int i,j,k; //variaveis de contadores
		
		int num[3]; //vetor 
		
		int maior , medio , menor; //variaveis auxiliares
		
		i=0; 
		
		for(i=0;i<=2;i++)
		{
			printf("Digite o Numero %d: ",i+1); 
			scanf("%d",&num[i]); 
		}
		
		
			for(j=0;j<=2;j++)
			{
				if(j==0) //caso o contador seja 0 
				{
					maior = num[j]; // a primeira vez a variavel maior recebe o vetor num
				}
				
				else
					if(num[j] > maior) // nas demais vezes ele fará a comparação
					{
						maior = num[j]; //se for verdade maior recebera o num
					}
					
						if(j==0) //caso o contador seja 0
						{
							menor = num[j]; // a primeira vez a variavel menor recebe o vetor num
						}
							else
							if(num[j] < menor) //nas demais vezes ele fara a comparação
							{
								menor = num[j]; // se for verdade a variavel menor recebe num
							}
			}
			
			
				for(k=0;k<=2;k++)
				{
					if((num[k]!=maior) && (num[k] != menor)) // num conforme o contador é diferente de maior e menor ? 
					{
						medio = num[k]; // se for a variavel medio recebe num
					}
				}
		
		// saída de dados
		printf("\n");
		printf("%d... ",maior); 
		printf("%d... ",medio);
		printf("%d...",menor);
	}
