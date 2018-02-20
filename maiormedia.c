#include <stdio.h>

int main()
{
	int numeros[10];
	int qtd_maior_media=0, i;
	float media, soma=0;
	
	//etapa1 - ler o vetor
	for(i=0;i<=9;i++)
	{
		printf("\nEntre com o numero:");
		scanf("%d", &numeros[i]);
		
		soma = soma + numeros[i]; //acumula notas		
	}
	//etapa2-calcular media
	media = soma/10;
	
	//etapa3 - calcular notas maiores que media
	for(i=0;i<=9;i++)
	{
		if(numeros[i]>media)
			qtd_maior_media++;
	}
	
	//imprimir o resultado
	printf("\nMedia da turma = %.2f", media);
	printf("\nNumero de alunos > media = %d", qtd_maior_media);
	
	return 0;
	
}
