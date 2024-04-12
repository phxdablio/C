/*  Faça um programa que leia dois números e mostre o maior deles. 
Se, por acaso, os dois números forem iguais, imprima a mensagem “Números iguais”.*/

#include <stdio.h>

int main ()
{
	
	float n1, n2;
	
	printf("Digite um numero: ");
	scanf("%f",&n1);
	
	printf("Digite outro numero: ");
	scanf("%f",&n2);
	
	if (n1 > n2)
	{
		printf ("%f e maior que %0.f",n1,n2);
	}
	if (n1 == n2)
	{
		printf (" Os numeros %f e %f tem o mesmo valor",n1,n2);
	}
	if (n1<n2)
	{
		printf ("%f e maior que %0.f",n2,n1);
	}
	}



