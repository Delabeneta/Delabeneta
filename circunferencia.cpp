#include <stdio.h>
#include <math.h>

struct Pontos {
float X;
float Y;
};


struct SegmentoReta {
	Pontos p[10];
};


void le_pontos(int tam)
{
	
	SegmentoReta ponto;
	
	for(int i = 0; i < tam; i++)
		{
			printf("X %d: ", i + 1);
			scanf("%f", &ponto.p[i].X);
			printf("Y %d: ", i);
			scanf("%f", &ponto.p[i].Y);
		}

	
}



void distancia(float distancia_Maior[], int tam)
{
	SegmentoReta ponto;
	 float Dx=0, Dy, dis=0, distancia_anterior=0, distancia=0;
	
 for(int j = 0; j < tam; j++)
 {

	
	for(int i = 2; i < tam + 1; i++)
		{	//printf("\n ************ P %d ************* \n ",i) ;
			
			
			
					if ( j+2 == i)
					{
						
					Dx = pow((ponto.p[j+2].X - ponto.p[tam-1].X), 2);
					Dy = pow((ponto.p[j+2].Y - ponto.p[tam-1].Y), 2);
					
						//printf("\n X2 = %f e Y2 = %f \n\n", j, ponto.p[tam + 1].X, ponto.p[tam+1].Y);
					}
					
					
					else
						{
						Dx = pow((ponto.p[j+2].X - ponto.p[i].X), 2);
						Dy = pow((ponto.p[j+2].Y - ponto.p[i].Y), 2);
					
						//printf("X2 = %f e Y2 = %f \n", ponto.p[i].X, ponto.p[i].Y);	
						}
					
				
	
			
			dis = sqrt ( Dx + Dy ); // distancia entre X
		//	printf("\n dis = %f \n", dis);
			
			
			if(i > 2);
			
			{ 
				//printf("%f > %f ",distancia_anterior, dis);
				if(distancia_anterior > dis)
				{
				distancia = distancia_anterior;	
				distancia_anterior = distancia_anterior;
			}
				else
				{
				//distancia_anterior = distancia;
				distancia = dis;	
				distancia_anterior = dis;
				}
					
			}
			if( i == 2)
			{
				distancia_anterior = dis;
		}
		
		//	printf(" \ndistancia anterior = %.4f  -------- distancia %.4f  \n", distancia_anterior, distancia);
			
						
		}
		
		 distancia_anterior = 0;
		// printf("\n distancia = %f ", distancia);
			
			distancia_Maior[j] = distancia;
//	printf("\n ");
	
	//printf("\n X - %f \n dis %f ", Dx, dis);
	
//	printf("\n");
	}
		
		
	
}


void calcula_circunferencia(float v[], int man)
	{
		SegmentoReta ponto;
		float maior=0;
		int i, j; 
		
		for (i = 0; i < man; i++) {
    if (i == 0) {
         maior = v[i];
         j = i;
    }
        
    else if (v[i] < maior) {
        maior = v[i];
        j = i;
    }
}
printf ("Maior = %.4f \n", maior);
printf(" %.4f %.4f", ponto.p[i+2].X, ponto.p[i+2].Y);
	}


int main()
{
	int n;

	
	do 
	{
		printf("N: ");
		scanf("%d", &n);
		
	}while ( n < 4);

	float vetor[n];
	
	
	le_pontos(n);
	distancia(vetor, n);
	calcula_circunferencia(vetor, n);	
	
}
