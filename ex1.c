#include <stdio.h>
#include <string.h>

/*
exerc�cio 1
Fa�a um programa em C para ler uma senha e comparar com sua senha secreta, 
se for igual, emitir a mensagem "Senha correta, sistema liberado", 
sen�o, "Senha incorreta, sistema travado".
*/

int main()
{
	char secreta[10] = "1234";
	char senha[10];
	
	printf("\nEntre com a senha:");
	gets(senha);
	
	if(!strcmp(senha,secreta)) 
		printf("\nSenha correta, sistema liberado");
	else
		printf("\nSenha incorreta, sistema travado");
	
	return 0;
}
