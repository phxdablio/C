#include <stdio.h>

int main (){
	float nota1,nota2,nota3,nota4,nota5,resultado,calculo;
	
	printf ("Digite suas cinco notas\n");
	scanf ("%f%f%f%f%f",&nota1,&nota2,&nota3,&nota4,&nota5);
	
	resultado = (nota1+nota2+nota3+nota4+nota5)/5;
	
	printf ("Sua media foi:%.2f",resultado);
}
