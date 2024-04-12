#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){

char nome [300];
float salario, vendas,porcentagem;

printf ("DIGITE SEU NOME");
scanf ("%s",&nome);

printf ("DIGITE O VALOR DE SEU SALARIO MENSAL");
scanf ("%f",&salario);

printf ("DIGITE O QUANDO VOCE VENDEU (EM VALOR)");
scanf ("%f",&vendas);

porcentagem = (vendas * 15)/1000;

}

