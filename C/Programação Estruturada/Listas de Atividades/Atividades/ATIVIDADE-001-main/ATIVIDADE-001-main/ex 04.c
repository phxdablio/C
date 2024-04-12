//Escreva um algoritmo para ler as dimensões de um retângulo (base e altura), calcular e escrever a área do retângulo.
#include <stdio.h>

int main (){
	
	float base,altura,resultado;
	
	printf ("Digite o valor da base de seu retangulo: ");
	scanf ("%f",&base);
	
	printf ("Digite o valor da altura de seu retangulo: ");
	scanf ("%f",&altura);
	
	resultado = base*altura;
	printf ("O resultado e %2.f",resultado);
}
	
