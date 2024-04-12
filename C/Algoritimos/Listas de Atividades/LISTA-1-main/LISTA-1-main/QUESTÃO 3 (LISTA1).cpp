#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
	float nota1, nota2, nota3;
	printf("Escreva a primeira nota");
	scanf ("%f",&nota1);
	printf("Escreva a segunda nota");
	scanf("%f",&nota2);
	printf("Escreva a terceira nota");
	scanf("%f",&nota3);
	float media = nota1 + nota2 + nota3 / 3;
	printf ("o resultado é %f",media);

}
