//O custo de um carro novo ao consumidor � a soma do custo de 
//f�brica com a porcentagem do distribuidor e dos impostos (aplicados ao custo de f�brica). 
//Supondo que o percentual do distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo para ler o custo de 
//f�brica de um carro, calcular e escrever o custo final ao consumidor

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
