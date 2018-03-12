#include <stdio.h>
#include <string.h>

int main()
{

	char nome[50];
	char sobrenome[50];

	printf("\nEntre com o nome:");
	gets(nome);

	printf("\nEntre com o sobrenome:");
	gets(sobrenome);

	printf("(%s %s)\n", nome, sobrenome);

	if( strcmp(nome,sobrenome) == 0 ) 
		printf("Nomes iguais!!!\n");
	else
		printf("Nomes diferentes!!\n");

	return 0;
	
}

