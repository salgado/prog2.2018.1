#include <stdio.h>
#include <string.h>>

int main()
{

	char nome[50];
	char sobrenome[50];
	char aux[50];

	printf("\nEntre com o nome:");
	gets(nome);
	
	printf("\nEntre com o sobrenome:");
	gets(sobrenome);
	
	//imprime valor lido
	printf("\nantes nome = %s, sobrenome=%s", nome, sobrenome);
	
	//usando strcpy - troque o conteudo de nome com sobrenome
	strcpy(aux, nome);
	strcpy(nome, sobrenome);
	strcpy(sobrenome, aux);
	
	//imprime valor lido
	printf("\ndepois nome = %s, sobrenome=%s", nome, sobrenome);
	
	
	
	return 0;
	
}
