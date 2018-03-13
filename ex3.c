#include <stdio.h>
#include <string.h>>

int main()
{

	char nome[50], palavra[50];
	int i, tam;

	printf("\nEntre com uma frqse:");
	gets(nome);
	
	tam= strlen(nome);
	
	for(i=0; i<tam ; i++)
	{
		
		if (nome[i] != 32 ) //compara com espaco branco em ASCII
			printf("%c", nome[i]);
		else
			printf("\n");
	}
	
	return 0;
	
}
