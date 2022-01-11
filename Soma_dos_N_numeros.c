#include <stdio.h>
//Questão 5 Faça um progama para calcular a soma dos n primeiros números inteiros positivos.
int main() {
  int numer,soma;  
  printf("\nDigite o valor de um numero: ");
  scanf("%d", &numer);
  soma = (numer * (numer + 1)) / 2;
  printf("A soma dos %d primeiros inteiros positivos é: %d\n", numer, soma);
  
  return 0;
}