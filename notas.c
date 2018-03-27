#include <stdio.h>

#define TAM 5000

void lernotas(float *vnotas, int tam)
{
	int i;
	//ler as notas e popular o vetor
	for(i=0;i<tam;i++)
	{
		printf("\nEntre com a nota %d = ", i+1);
		scanf("%f", &vnotas[i]);
	}
	
}

float calcmedia(float *vnotas, int tam)
{
	int i;
	float soma=0, media;
	//calcularmedia
	for(i=0;i<tam;i++)
	{
		soma = soma + vnotas[i];
	}
	media = soma / tam;
	
	return media;
}

void imprime(float *vnotas, int tam)
{
	int i;
	//imprime todo o vetor
	printf("\nrelacao de notas");
	for(i=0;i<tam;i++)
	{
		printf("\nNota %d = %f", i+1, vnotas[i]);
	}
	
}

int main()
{
	float vnotas[TAM], media;
	
	lernotas(vnotas, TAM);
	
	media = calcmedia(vnotas, TAM);
	printf("\nmedia = %f", media);
	
	imprime(vnotas, TAM);
	
	return 0;
}
