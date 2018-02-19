#include <stdio.h>

int main()
{
	int numeros[10];
	int maior=0, i;
	
	for(i=0;i<=9;i++)
	{
		printf("\nEntre com o numero:");
		scanf("%d", &numeros[i]);
		if(numeros[i]>maior)
			maior = numeros[i];
			
	}
	//exibir na tela o maior valor lido
	printf("\nMaior valor=%d", maior);
	
	return 0;
	
}
