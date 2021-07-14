#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

	struct ALUNO 
	{
		int matricula;
		
		int nota[4];
		
		char nome[50]; 
	}; 
	
	void media()
	{
		int i;
		
		float conta_nota, resultado;
		
		i = 0; 
		
		conta_nota = 0;
		
		struct ALUNO cadastro; 
		
		printf("Digite o Nome do Aluno: \n");
		scanf("%s",cadastro.nome); 
		
		printf("Digite o AG: \n");
		scanf("%d",&cadastro.matricula); 
		
		for(i=0;i<=3;i++)
		{
			printf("Qual a Nota %d do Aluno %s :  ",i+1,cadastro.nome);
			scanf("%d",&cadastro.nota[i]); 
			
			conta_nota = conta_nota + cadastro.nota[i]; 
		}
		
		
		
		system("cls");
		
			resultado = conta_nota / 4;
			
		printf("O Nome do Aluno e %s \n",cadastro.nome);
		printf("A Matricula do Aluno e: %d \n",cadastro.matricula);
		printf("A Media do Aluno e %2.f \n",resultado);
		printf("\n"); 
		 
	}
	
	int main()
	{
		int opc;
		 
		 do
		 {
		 	printf("Digite 1 Para Calcular Media\n");
		 	printf("Digite 0 Para Sair\n");
		 	scanf("%d",&opc);
		 	
		 	system("cls");
		 	
		 	switch(opc)
		 	{
		 		case 1:
				
				media(); 
				
				break; 	
			}
		 	
		 } while (opc!=0);
	}
