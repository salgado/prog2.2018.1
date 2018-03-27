#include <stdio.h>
int fatorial(int n);
int main()
{
	int num, fat;
	
	printf("\nEntre com um numero:");
	scanf("%d", &num);
	
	fat = fatorial(num);
	
	printf("\nFatorial = %d", fat);
	
	return 0;
	
}

int fatorial(int n)
{
	int i, result=1;
	
	for(i=n; i!=0;i--)
		result*=i;
	
	return result;
}
