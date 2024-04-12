#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
int a,b,c,d,x,y,z;

printf ("DE UMA VALOR PARA A E OUTRO PARA B\n");
scanf ("%d %d",&a,&b);
printf ("DE UMA VALOR PARA C E OUTRO PARA D\n");
scanf ("%d %d",&c,&d);



x = a*b;
y= c+d;
z = x - y;

printf ("0 VALOR DE A + B E %d\n",x);
printf ("0 VALOR DE C + D E %d\n",y);
printf ("O VALOR DA DIFERENcA ENRTRE OS DOIS CALCULOS E %d\n",z);
}

