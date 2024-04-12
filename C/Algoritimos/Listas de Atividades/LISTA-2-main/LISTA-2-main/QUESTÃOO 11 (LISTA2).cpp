#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main (void)
{
	float raio, volume, area;
	
	printf ("DIGITE O VALOR DO RAIO QUE DAREMOS O VALOR DE SUA AREA E VOLUME DE UMA CIRCUNNFERENCIA\n");
	scanf ("%f",&raio);
	
	area = (4) * (3.14 *(raio * raio));
	volume = (4/3.0) * (3.14 *(raio * raio * raio));
	
	printf ("O VALOR DA AREA E DE %0.3f E DO VOLUME E DE %0.3f",area,volume);
	
}
