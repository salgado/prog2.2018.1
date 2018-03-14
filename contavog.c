#include <stdio.h>

int contavogais(char *nome)
{
	return strlen(nome);
}

void troca(char *str1, char *str2)
{
	char aux[50];
	
	strcpy(aux, str1);
	strcpy(str1, str2);
	strcpy(str2, aux);
	
}

int main()
{
	char nome1[50]="alex";
	char nome2[50]="salgado";
	
	printf("nome = %s, sobrenome=%s", nome1, nome2);
	troca(nome1, nome2);
	printf("nome = %s, sobrenome=%s", nome1,nome2);
	
	printf("\nTamanho da palavra=%d", contavogais("meu texto"));
	
	
	return 0;
}
