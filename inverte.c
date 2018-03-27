#include <stdio.h>
#include <string.h>


void imprime_invertido(char *str)
{
	int i, tam;
	tam = strlen(str);
	
	for(i=tam-1; i>=0; i--)
		printf("%c", str[i]);
	
		
	printf("\n");
		
}

int main()
{
	char frase[50];
	
	printf("\nDigite uma frase:");
	gets(frase);
	
	imprime_invertido(frase);
	
	return 0;
}
