/* 1.Fa�a um programa que leia dois n�meros e mostre qual deles � o maior.*/

#include <stdio.h>

int main ()
{
	
	float n1, n2;
	
	printf("Digite um numero: ");
	scanf("%f",&n1);
	
	printf("Digite outro numero: ");
	scanf("%f",&n2);
	
	if (n1 > n2){
		
	printf ("%f � maior que %0.f",n1,n2);
	}
	else {
	printf	("%f � maior que %0.f",n2,n1);
	}
}

