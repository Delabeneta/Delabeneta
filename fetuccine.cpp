#include <stdio.h>


void le_termos_iniciais(int v[], int tam)
{
	for (int i = 0; i < 3; i++)
	{
		printf("N%d: ", i + 1);
		
		scanf("%d", &v[i]);
	}
		
}




void calcula_serie(int v2[], int tam2)
{
	int operacao=0;
	int rep = 1; // repetir até 3
	
	//printf("-> Calcula serie: \n");
//	printf("%d ", v2);
	for (int i = 3; i <= tam2; i++)
	{
		rep = rep + 1;
		operacao = v2[i - 3];
		for(int j = i - 2; j <= rep; j++)
		{
			
			
			if ( i % 2 == 0) // par. substrai
			{
				operacao -= v2[j];
			}
			
			else if ( i % 2 == 1) //  impar. soma
			{
				operacao += v2[j];
			}
		}
		
			v2[i] = operacao;
			//printf(" %d ", operacao);
			
	}
}	


void inverte_serie(int vetor[], int tam3, int v4[])
{

	for (int i = tam3; i >= 0 ; i--)
	{
		v4[tam3 - i] = vetor[i]; 
	}
}


void imprime_serie(int v4[], int tam4)
{
	for(int i=0; i<= tam4; i++)
		printf(" %d ", v4[i]);	
	
}


int main ()
{
	int n;
	
	do
	{
	
	printf("N: ");
	scanf("%d", &n);
	} while(n <= 4);
	
	n = n - 1;
	int vetor[n]; 
	int v4[n]; // pegar ordem invertida
	
	
	//printf(" \n -> Le termos \n");
	le_termos_iniciais(vetor, n);
	
	calcula_serie(vetor, n);
	
	//printf("\n\n -> inverte \n");
	inverte_serie(vetor, n, v4);
	
	//printf("-> imprimi serie \n");
	imprime_serie(v4, n);
}
