/*  Fa�a um programa que leia dois n�meros e mostre o maior deles. 
Se, por acaso, os dois n�meros forem iguais, imprima a mensagem �N�meros iguais�.*/

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



