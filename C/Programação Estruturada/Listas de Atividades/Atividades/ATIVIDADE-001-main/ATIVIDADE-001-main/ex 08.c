//Uma revendedora de carros usados paga a seus funcion�rios vendedores um sal�rio fixo por m�s, mais uma comiss�o tamb�m fixa para cada carro vendido e mais 5% do valor das vendas por ele efetuadas. 
//Escrever um algoritmo que leia o n�mero de carros por ele vendidos, 
//o valor total de suas vendas, o sal�rio fixo e o valor que ele recebe por carro vendido. 
//Calcule e escreva o sal�rio final do vendedor.
#include <stdio.h>

int main ()
{
	float vendas,valorVendas,salario,salarioFinal;
	
	printf ("Digite o valor do salario: ");
	scanf("%f",&salario);
	printf("Digite quantos carros foram vendidos: ");
	scanf("%f",&vendas);
	printf ("Digite o valor dos carros vendidos: ");
	scanf ("%f",&valorVendas);
	
	salarioFinal = salario+vendas*valorVendas*0.05;
	
	printf ("O sal�rio vai ser: %2.f",salarioFinal);
	
	}
