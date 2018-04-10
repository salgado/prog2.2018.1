/*
5.1-Faça uma função para receber 2 números inteiros e retornar 2 valores (multiplicação e divisão ) entre os 2 números
5.1.1 Como ficaria o protótipo desta função?
resposta: 
5.2 - Faça um programa para testar essa função
5.3 - Desenhe a pilha de execução de memória do programa anterior
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

