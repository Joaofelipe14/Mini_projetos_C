#include <stdio.h>
 // Questão 7 Faço um progama que calcule a fatorial de um numero inteiro
int main()
{
int fat, numer;
printf("Insira o valor que você deseja: ");
scanf("%d", & numer); 
for(fat = 1; numer > 1; numer = numer - 1)
fat = fat * numer;
 printf("A fatorial é igual %d", fat);
return 0;
}