#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
 
 int main (){
 	int dividendo, divisor;
 	printf ("De um valor para o dividendo");
 	scanf ("%d",dividendo);
 	printf ("De um valor para o divisor");
	 scanf ("%d",divisor);
	 int resultado = dividendo/divisor;
	 int resto = dividendo-resultado+divisor;
	 printf("O resultado é %d",resultado);
	 printf("O resultado é %d",resto);
 }
