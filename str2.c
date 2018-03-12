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

	strcat(nome, sobrenome);

	printf("(%s)\n", nome);


	return 0;
	
}

