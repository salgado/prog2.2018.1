#include <stdio.h>

void contagem_regressiva(int ini, int fim)
{
	int i;
	for(i=ini; i>=fim ;i--)
		printf("\n%d", i);
		
	printf("\nBoom!!");	

}

int soma(int num1, int num2)
{
	return num1+num2;
}

int main()
{
	int res, n1, n2;
	
	printf("\nEntre com numero1:");
	scanf("%d", &n1);
	
	printf("\nEntre com numero2:");
	scanf("%d", &n2);
	
	res = soma(n1, n2);
	printf("\nSoma = %d", res);
	
	return 0;
}
