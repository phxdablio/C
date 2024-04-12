#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
int n1;
float n2, n3;
char a, b[200];

printf ("ESCREVA UM NUMERO INTEIRO\n");
scanf ("%d",&n1);

printf ("DIGITE DOIS NUMEROS REAIS\n");
scanf ("%f%f",&n2,&n3);

getchar();

printf ("DIGITE UMA LETRA\n");
scanf ("%c",&a);

printf ("ESCREVA UM NOME\n");
scanf ("%s",&b);

printf ("NUMERO INTEIRO %d",n1);
printf ("NUMEROS REAIS %f e %f", n2,n3);
printf ("LETRA DIGITADA %c",a);
printf ("NOME DIGITADO %s",b);

}

