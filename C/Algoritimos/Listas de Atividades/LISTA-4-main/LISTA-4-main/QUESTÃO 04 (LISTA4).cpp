#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int main (){

int numero,multiplos,i;


printf ("[DIGITE O NUMERO E A QUANTIDADE DE MULTIPLOS]\n");
scanf ("%d%d",&numero,&multiplos);

for (i=1; i <=multiplos; i++)
{
printf ("%d ",i*numero);
}
}
