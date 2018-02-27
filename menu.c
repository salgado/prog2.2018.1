#include <stdio.h>

int soma(int num1, int num2)
{
	return num1+num2;
}

int subtrai(int num1, int num2)
{
	return num1-num2;
}

int menu()
{
	int opc;
	
	printf("\n*************");
	printf("\ncalculadora");
	printf("\n**************");
	printf("\n1-Soma");
	printf("\n2-Subtrair");
	printf("\n0-Sair");
	printf("\n*************");
	
	do
	{
		printf("\nEscolha uma opcao: ");
		scanf("%d", &opc);
	}while(opc<0 || opc>2);
	
	return opc;
}

int main()
{
	int m, num1, num2;
	
	m = menu();
	if(m==0)
		return 0;
	else
	{
		printf("\nEntre com num1:");
		scanf("%d", &num1);
		
		printf("\nEntre com num2:");
		scanf("%d", &num2);
		
		if(m==1)
			printf("\nSoma=%d", soma(num1, num2));
		else
			printf("\nSubtracao=%d", subtrai(num1, num2));
	
	}
	
	return 0;
}
