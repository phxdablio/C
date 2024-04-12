#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>1
int main (void){
int n1, n2;
printf ("[DIGITE UM NUMERO E EM SEGUIDA OUTRO]\n");
scanf ("%i %i",&n1,&n2);
if ( n1==n2)
{
printf ("%d TEM O MESMO VALOR DE %d", n1,n2);
}
else if (n1>n2)
{
printf ("%d E MAIOR QUE %d",n1,n2);
}
else
{
printf ("%d E MAIOR QUE %d",n2,n1);
}
}

