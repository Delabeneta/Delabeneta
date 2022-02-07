#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

int aleatorio(int a, int b)
{
    return rand() % (b-a+1) + a;
}

int verificar_palavra(char v[], int tam)
{
	int verificar; 
	if (tam >= 5 and tam <= 50)
	{
		
		for(int i = 0; i < tam; i++){

					if (isalpha(v[i]))
					{
						
						verificar++;
					}
					
					else
					{
						verificar = 0; 
						printf("Nao e uma palavra");
						break;	
					}
						
											
				}
		
		
	}
		
	else
	{
	
		printf("Nao e uma palavra \n");
		verificar = 0;		
}

	return verificar;	

}


void embaralha(char vetor[], int tamanho)
{
	// Inicializa a semente de números aleatórios
    srand(time(NULL));
	int validador = 0; 
	int sorteio, a = 0, teste; 
	int vetor_posicao[50]; 
	int b = tamanho - 1;
	for (int i = 0; i < tamanho; i++){   // sorteia
    	
				
				sorteio = aleatorio(a, b);
				vetor_posicao[i] = sorteio;
				
				validador = 0;
		
		if (i >  0)
		  {
		  
		  			while(validador == 0)
						{
					
				  		for(int j = 0; j < i; j++)
		  			 		{
		  			 	
		  			 	    if (vetor_posicao[i] == vetor_posicao[j])
		  			 	    	{
									sorteio = aleatorio(a, b);
				                    vetor_posicao[i] = sorteio;

									validador = 0;
									break;
 										 }
					 		else
							 {
							 	validador = 1;
								 }	
					 			
					 	
								   }
		  				
		 		}
		  	
		  
			validador = 1;  	
			  }	// fim do if
		
			
		
	}// fim do for
	
	for(int j = 0; j < tamanho; j++)
	{
		printf("%c", vetor[vetor_posicao[j]]);
	}	
	puts("\n");	
}





int main()
	{
		int TAM = 50;
		char vetor2[TAM];
		int n;
		int resull;    
	
		
		while (true)
		{
			
  			do {
    			
    			printf("string: ");
	            gets(vetor2);
    			
    			n = strlen(vetor2);
    			
				if ( vetor2[0] == '\0')
					return false;
				
    					//tam_v = strlen(vetor2); // tamanho
    			resull = verificar_palavra(vetor2, n); // veficar se é palavra.
					    }while(resull == 0);
		
				printf("%s -> ", vetor2);
				embaralha(vetor2, n);				
			
			   
	}
		
	}		
