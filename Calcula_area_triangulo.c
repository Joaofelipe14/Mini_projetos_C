#include<stdio.h>
#include<locale.h>
//Questao 4 Faça um progama para identificar o lado de um trigangulo e imprima se ele é:equilatero, isosceles, ou escaleno.
int main(){

setlocale(LC_ALL, "Portuguese");
float a,b,c;
printf("Digite a medida do lado A: ");
scanf("%f",&a);
printf("Digite a medida do lado B: ");
scanf("%f",&b);
printf("Digite a medida do lado C: ");
scanf("%f",&c);

if((a<0)||(b<0)||(c<0)){
printf("\nOs valores não podem formar um triangulo!\n");
}

else if((a==b)&&(a==c)&&(b==c)){
printf("\nO triangulo e equilátero!\n");
}

else if ((a==b||b==c||c==a)){
printf("\nO triangulo e isósceles!\n");
}

else if((a!=b)&&(a!=c)&&(b!=c)){
printf("\nO triangulo e escaleno!\n");
}
return 0;

}
