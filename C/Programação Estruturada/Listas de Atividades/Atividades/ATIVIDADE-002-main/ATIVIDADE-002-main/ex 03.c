/* Fa�a um programa que leia um n�mero inteiro e verifique se esse n�mero � par ou �mpar.*/

#include <stdio.h>

int main ()
{
	int n1;
	
	printf ("Digite um numero inteiro: ");
	scanf ("%d",&n1);
	
	if (n1 % 2 == 0) {
		printf ("O numero %d e par",n1);
	}
	else {
		printf ("O numero %d e impar",n1);
	}
}
