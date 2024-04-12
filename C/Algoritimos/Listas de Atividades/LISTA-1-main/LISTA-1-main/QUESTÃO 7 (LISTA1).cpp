#include <stdio.h>
	#include <ctype.h>
	#include <string.h>
	#include <stdlib.h>
	 
	 int main (void){
	char nome[300];
	char genero, matricula;
	float horas, valor,resultado;
	
	printf("[DIGITE SEU NOME]\n");
	scanf ("%s",&nome);
	
	getchar();
	printf ("[DIGITE: M (MASCULINO), F (FEMININO)]\n");
	scanf ("%c",&genero);

	printf ("[DIGITE QUANTAS HORAS VOCE TRABALHA POR DIA]\n");
	scanf("%f",&horas);
	
	printf ("[DIGITE O VALOR QUE VOCE RECEBE POR HORA TRABALHADA]\n");
	scanf ("%f",&valor);
	
	resultado = horas * valor;
	
	printf ("[NOME : %s]\n",nome);
	printf ("[GENERO : %c]\n",genero);
	printf ("[HORAS TRABALHA POR DIA : %f]\n",horas);
	printf ("[VALOR RECEBIDO POR HORA TRABALHADA : %f]\n",valor);
	printf ("[VALOR DE SEU SALARIO : %f]\n",resultado);
	
}
