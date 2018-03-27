#include <stdio.h>

void incrementa_um(int *num)
{
	*num = *num +1;
}

int main()
{
	int x;
	x=10;
	printf("\nx=%d", x);
	incrementa_um(&x);
	printf("\nx=%d", x);
	
	return 0;
}
