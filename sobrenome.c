#include <stdio.h>
#include <string.h>>

int main()
{

	char nome[50];
	char sobrenome[50];
	char nomecompleto[50];

	printf("\nEntre com o nome:");
	gets(nome);
	
	printf("\nEntre com o sobrenome:");
	gets(sobrenome);
	
	//montar o conteudo da variavel nomecompleto
	strcpy(nomecompleto, "");
	strcpy(nomecompleto, sobrenome);
	strcat(nomecompleto, ", ");
	strcat(nomecompleto, nome);
	
	//nomecompleto no formato "sobrenome, nome"	
	printf("\n%s", nomecompleto);
	
	return 0;
	
}
