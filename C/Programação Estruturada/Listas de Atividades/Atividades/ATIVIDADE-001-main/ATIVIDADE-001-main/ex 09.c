// Faça um algoritmo que leia três notas de um aluno, calcule e escreva a média final deste aluno. 
//Considerar que a média é ponderada e que o peso das notas é 2, 3 e 5. Fórmula para o cálculo da média final é:
//((n1*2)+(n2*3)+(n3*5))/2+3+5

#include <stdio.h>

int main ()
{
	float n1,n2,n3,resultado;
	
	printf ("Digite o valor de sua primeira nota");
	scanf ("%f",&n1);
	printf ("Digite o valor de sua segunda nota");
	scanf ("%f",&n2);
	printf ("Digite o valor de sua terceira nota");
	scanf ("%f",&n3);
	
	if ( n1 <=10 && n2 <=10 && n3 <=10){
		
		resultado= ((n1*2)+(n2*3)+(n3*5))/10;
		printf("Sua media foi : %f",resultado);
	}
	else {
		printf("Os valores digitados não devem passar de 10");
	}
}
