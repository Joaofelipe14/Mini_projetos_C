#include "stdio.h"
#include "stdbool.h"
//Questão 3 Faço um progama para analisar se o ano digitado é bissexto ou nao.
int main()
{
	int ano;
	
	printf("Digite o ano: ");
	scanf("%d", &ano);
	if (ano % 400 == 0) {
		bissexto = true;		
	}
	else if ((ano % 4 == 0) && (ano % 100 != 0)) {
		bissexto = true;		
	}
	else {
		bissexto = false;
	}
	if (bissexto == true) {
		printf("O ano é bissexto !");
	} else {
		printf("O ano não é bissexto !");
	}
}