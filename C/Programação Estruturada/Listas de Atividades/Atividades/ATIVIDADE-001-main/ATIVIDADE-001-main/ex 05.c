//Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e escreva a idade dessa pessoa expressa apenas em dias. Considerar ano com 365 dias e mês com 30 dias.
#include <stdio.h>

int main (){

int idade, meses, dias, resultado1,resultado2,resultadoFinal;


printf ("Vamos pedir sua idade e gostariamos que repondese de acordo com o modelo :  15 anos 3 meses e 3 dias \n");
printf ("Fale sua idade: \n");
scanf("%d",&idade);
printf("Seus meses de idade: \n");
scanf("%d",&meses);
printf("Seus dias de idade : \n");
scanf("%d",&dias);

resultado1 = idade*365;
resultado2 = meses*30;
resultadoFinal = resultado1 + resultado2 + dias;

printf ("Sua idade total em dias e de: %d ",resultadoFinal);
}
