// Fa�a um algoritmo que leia tr�s notas de um aluno, calcule e escreva a m�dia final deste aluno. 
//Considerar que a m�dia � ponderada e que o peso das notas � 2, 3 e 5. F�rmula para o c�lculo da m�dia final �:
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
		printf("Os valores digitados n�o devem passar de 10");
	}
}
