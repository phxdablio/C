//O custo de um carro novo ao consumidor é a soma do custo de 
//fábrica com a porcentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). 
//Supondo que o percentual do distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo para ler o custo de 
//fábrica de um carro, calcular e escrever o custo final ao consumidor

#include <stdio.h>

int main (){
	
	float custoDeFabrica,resultado;
	float percentualDeFabrica = 0.28;
	float distribuidor = 0.45;
	
	printf ("Digite o valor de custo de fabricacao: ");
	scanf ("%f",&custoDeFabrica);
	
	resultado = custoDeFabrica*(1+distribuidor)*(1+percentualDeFabrica);
	printf ("O resultado e de: %f",resultado);
	
	
}
