#include <stdio.h>
#include <string.h>

int contavogais(char *nome)
{
	//desenvolver a logica de contar vogais
	int cont=0, tam, i;
	
	tam=strlen(nome);
	for(i=0;i<tam;i++)
	{
		if(nome[i]=='a' || nome[i]=='e' || nome[i]=='i' || nome[i]=='o' || 
			nome[i]=='u' )
			{
				cont++;
			}
	}
	
	return cont;
}

int main()
{
	char frase[100];
	int numvogais;
	
	printf("\nEntre com uma frase:");
	gets(frase);
	
	numvogais=contavogais(frase);
	
	printf("\nEsta frase tem %d vogais", numvogais);
	
	return 0;
	
}
