#include <stdio.h>
#include <string.h>

void strcontagoogle(char *emailnovo, char *nome, char *sobrenome)
{
	///deservolver algoritmo para formar email 
	///nome.sobrenome@soulasalle.com.br
	strcpy(emailnovo, nome);
	strcat(emailnovo, ".");
	strcat(emailnovo, sobrenome);
	strcat(emailnovo, "@soulasalle.com.br");
	
}

int main()
{
	char nome[50], sobrenome[50], email[100]="";
	
	printf("\nEntre com nome:");
	gets(nome);
	
	printf("\nEntre com sobrenome:");
	gets(sobrenome);
	
	//calcula email novo
	printf("\nEmail: %s", email);
	strcontagoogle(email, nome, sobrenome);
	printf("\nEmail: %s", email);
	
	return 0;
}
