#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int main ()
{
	float x1,x2,y1,y2,p1,p2,soma;
	
	printf ("DE UM VALOR PARA X1 E X2\n");
	scanf ("%f",&x1);
	scanf ("%f",&x2);
	
	printf ("AGORA DE UM VALOR PARA Y1 E Y2\n");
	scanf ("%f",&y1);
	scanf ("%f",&y2);
	
	p1 = (x2 - x1) * (x2 - x1);
	p2 = (y2 - y1) * (y2 - y1);
    soma = p1 + p2;
	
	printf ("A DISTANCIA ENTRE ELES E %0.4f", sqrt(soma));


}
