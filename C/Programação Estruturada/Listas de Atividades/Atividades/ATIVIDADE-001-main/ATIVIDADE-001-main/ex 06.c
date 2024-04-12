// Escreva um algoritmo para ler o salário mensal atual de um funcionário e o percentual de reajuste. Calcular e escrever o valor do novo salário.
#include <stdio.h>

int main (){
	
	float salario, reajuste, resultado;
	
	printf ("Digite o valor do seu salario: ");
	scanf ("%f",&salario);
	printf ("Digite o percentual de reajuste: ");
	scanf ("%f",&reajuste);
	
	resultado = salario *(1+reajuste/100);
	printf ("O seu salario com o reajustefica : %2.f",resultado);
	
	
	
}
