/*Fa�a um programa que leia um n�mero e, caso ele seja positivo, 
calcule e mostre: o n�mero digitado ao quadrado e raiz quadrada do n�mero digitado */

#include <stdio.h>
#include <math.h>

int main ()
{

	float n1,quadrado,raiz;
	
	printf ("Digite um numero desejado: ");
	scanf ("%f",&n1);
	
	quadrado = n1*n1;
	raiz = sqrt(n1);
	
	printf ("O valor ao quadrado e: %0.f ",quadrado);
	printf ("A raiz do valor e de: %0.f ",raiz);
}
	
	
	
