#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int a , b; //n�meros que ser�o armazenados 
int soma, subtracao, divisao, multiplicacao; //operadores
int escolha, resp;  //extras

int main(void){
	
	setlocale(LC_ALL, "Portuguese"); 
	
	do{
		printf("\n==== CALCULADORA SIMPLES ====\n\n");
		printf(" 1 - Soma \n");
		printf(" 2 - Subtra��o\n");
		printf(" 3 - Divis�o\n");
		printf(" 4 - Multiplica��o\n\n");
		
		printf(" Escolha uma op��o de (1 a 4): ");
		scanf("%d", &escolha); 
	
		switch (escolha){
		
		case 1: 
		
				
			break; 
		
			case 2: 
				
			break; 
		
			case 3: 
				
			break; 
		
			case 4: 
			break;
		
			default: 
			printf(" Erro: Valor Inv�lido! Digite somente valores de 1 a 4\n"); 
			break;
		
		}
		
		printf("\n\n Digite ( 1 ) para continuar ou ( 2 ) para sair\n"); 
		scanf("%d", &resp); 
		
	}	while(resp == 1);
	
	return 0; 
	
}
