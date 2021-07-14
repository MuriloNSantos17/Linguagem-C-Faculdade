#include<stdio.h>
#include<conio.h>
#include<string.h> //Biblioteca para Lidar Com Strings


//Código Feito Por Murilo Nunes dos Santos 03/06/2016 - Conversor de Número Inteiro Para Morsi

	int main()
	{
		int x; 
		
		char morsi[7]; 
		
		printf(" Digite o Digito: ");
		scanf("%d",&x); //ele le o valor de x
		gets(morsi);  //da um gets (pegar na string morsi 
		
		
			if(x == 1) // ai faz a comparação
			{
				
				strcpy(morsi,". _ _ _ _");	//se x = 1 então copie para a string Morsi o Seguinte Texto . _ _ _ _ ( E Assim ele Faz em Diante) 
			}
			
				if (x == 2) 
				{
					strcpy(morsi,". . _ _ _");
				}
				
					if (x == 3)
					{
						strcpy(morsi,". . . _ _");
					}
					
						if( x == 4 )
						{
							strcpy(morsi,". . . . _");
						}
						
								if( x == 5 )
								{
									strcpy(morsi,". . . . .");
								}
								
									if( x == 6 )
									{
										strcpy(morsi,"_ . . . .");
									}
									
											
										if( x == 7 )
										{
											strcpy(morsi,"_ _ . . .");
										}	
		
											if( x == 8 )
											{
												strcpy(morsi,"_ _ _ . .");
											}	
											
												if( x == 9 )
												{
													strcpy(morsi,"_ _ _ _ .");
												}
												
													if( x == 0)
													{
														strcpy(morsi,"_ _ _ _ _");	
													}
		
		
		
		printf("\n");
		printf(" O Numero %d em Morsi e: %s ",x,morsi); 
	}

