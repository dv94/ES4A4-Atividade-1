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
			
			printf("\n OP��O ESCOLHIDA: SOMA \n\n");
			
			printf(" Escolha um n�mero: ");
			scanf("%d", &a);
			
			printf("\n Escolha outro n�mero: ");
			scanf("%d", &b);
			
			soma = a + b; 
			
			printf("\n A soma de %d + %d �: %d ", a, b, soma); 
			
			break; 
		
			case 2: 
			
			printf("\n OP��O ESCOLHIDA: SUBTRA��O \n\n");
			
			printf(" Escolha um n�mero: ");
			scanf("%d", &a);
			
			printf("\n Escolha outro n�mero: ");
			scanf("%d", &b);
			
			subtracao = a - b; 
			
			printf("\n A soma de %d - %d �: %d ", a, b, subtracao); 
			
				
			break; 
		
			case 3: 
			
				printf("\n OP��O ESCOLHIDA: DIVIS�O  \n");
				printf("\n Escolha um n�mero: ");
				scanf("%d", &a); 
			
				printf("\n Escolha outro n�mero: ");
				scanf("%d", &b); 
			
				divisao = a / b;
				
				printf("\n A divisao de %d / %d � : %d", a, b, divisao);
			break; 
		
			case 4: 
			
				printf("\n OP��O ESCOLHIDA: MULTIPLICA��O  \n");
				printf("\n Escolha um n�mero: ");
				scanf("%d", &a); 
			
				printf("\n Escolha outro n�mero: ");
				scanf("%d", &b); 
			
				multiplicacao = a * b;
				
				printf("\n A multiplicacao de %d * %d � : %d", a, b, multiplicacao);
			break; 
		
			default: 
			printf("\n Error: Valor Inv�lido! Digite somente valores de 1 a 4\n"); 
			break;
		
		}
		
		printf("\n\n Digite ( 1 ) para continuar ou ( 2 ) para sair!: "); 
		scanf("%d", &resp); 
		
	}	while(resp == 1);
	
	return 0; 
	
}
