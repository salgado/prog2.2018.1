/*
5.1-Fa�a uma fun��o para receber 2 n�meros inteiros e retornar 2 valores (multiplica��o e divis�o ) entre os 2 n�meros
5.1.1 Como ficaria o prot�tipo desta fun��o?
resposta: 
5.2 - Fa�a um programa para testar essa fun��o
5.3 - Desenhe a pilha de execu��o de mem�ria do programa anterior
*/
#include <stdio.h>

void calculadora(int n1, int n2, int *mult, float *div);

int main()
{
	int num1, num2, mult;
	float div;
	
	printf("\nEntre com o numero 1:");
	scanf("%d", &num1);
	
	printf("\nEntre com o numero 2:");
	scanf("%d", &num2);
	
	//chamar funcao com passagem por referencia
	calculadora(num1, num2, &mult, &div);
	
	printf("\nO resultado de %d x %d = %d", num1, num2, mult);
	printf("\nO resultado de %d / %d = %f", num1, num2, div);
	
	return 0;
	
}

void calculadora(int n1, int n2, int *mult, float *div)
{
	*mult = n1*n2;
	*div = (float)n1/n2;
}

