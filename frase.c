#include <stdio.h>
#include <string.h>
/*
4.1 - Faça uma função para receber uma frase e uma letra como parâmetro e retornar quantas ocorrencias da letra existe na frase. 
4.1.1 Como ficaria o protótipo desta função?
resposta: int contaletra (char *frase, char letra)
4.2 - Faça um programa para testar essa função

*/
int contaletra (char *frase, char letra);

int main()
{
	char minhafrase[100];
	char minhaletra;
	int numletra;
	
	printf("\nEntre com a frase:");
	gets(minhafrase);
	
	printf("\nEntre com uma letra:");
	scanf("%c", &minhaletra);
	
	numletra = contaletra(minhafrase, minhaletra);
	
	printf("\nA letra %c, ocorre %d vezes na frase abaixo:\n%s", minhaletra, numletra, minhafrase);
	
	return 0;
	
}

int contaletra (char *frase, char letra)
{
	int tam, i, cont=0;
	
	tam=strlen(frase);
	
	for(i=0; i<tam;i++)
	{
		if(frase[i]==letra)
			cont++;
	}
	
	return cont;
}
