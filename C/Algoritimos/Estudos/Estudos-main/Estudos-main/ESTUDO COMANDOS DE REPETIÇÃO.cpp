

#include <stdio.h>
#include <locale.h>
int main (void) 
{
int contador;
for(contador = 0; contador < 7; contador++)
printf ("[OS ALUNOS DE ALGORITIMO E PROGRAMACAO SAO OS MAIS LINDOS E INTELIGENTES DA UCB]\n");
}

#include <stdio.h>
int main (void){
int mes,i;

for(i=0; i<5; i++){

printf ("[DIGITE O MES]\n");
scanf ("%d",&mes);
switch (mes)
{
case 1: printf ("Janeiro\n"); break;
case 2: printf ("Fevereiro\n"); break;
case 3: printf ("Marco\n"); break;
case 4: printf ("Abril\n"); break;
case 5: printf ("Maio\n"); break;
case 6: printf ("Junho\n"); break;
case 7: printf ("Julho\n"); break;
case 8: printf ("Agosto\n"); break;
case 9: printf ("Setembro"); break;
case 10: printf ("Outubro\n"); break;
case 11: printf ("Novembro\n"); break;
case 12: printf ("Dezembro\n"); break;
default : printf ("[OPERADOR INVALIDO]");
}
}
for(i=0; i<20; i++){
printf ("FELIZ ANO NOVO\n\n");
}
}

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>1
int main (void){
int salario, emprestimo,calculo,i;

for(i =0; i<8; i++){


printf("[DIGITE O VALOR DO SEU SALARIO]\n");
scanf ("%i",&salario);

printf("[DIGITE O VALOR DO EMPRESTIMO]\n");
scanf ("%i",&emprestimo);

calculo = (salario * 20)/100;
if (calculo>=emprestimo)
{
printf ("EMPRESTIMO AUTORIZADO\n\n");
}
else
{
printf ("EMPRESTIMO NEGADO\n\n");
}
}
}

#include <stdio.h>
#include <locale.h>
int main (void) 
{
int iniciar;
printf ("DESEJA INICIAR O ALGORITIMO ?\n");
printf ("DIGITE 1 PARA SIM E 2 PARA NAO\n");
scanf ("%d",&iniciar);

while (iniciar ==1){
printf ("RODANDO WHILE\n");
printf ("DESEJA CONTINUAR ? SE SIM PRESISONE 11\n");
scanf ("%d",&iniciar);
}
}

#include <stdio.h>
#include <locale.h>
int main (void) 
{
int idade;


do{

printf ("DIGITE SUA IDADE\n");
scanf ("%d",&idade);

}while (idade < 1 || idade >110);
}

#include <stdio.h>
#include <locale.h>
int main (void) 
{
int validar_inteiro; // validar de 1 a 10
float validar_real; // valido a 9.9
char validar_caracter; // validar apenas a letra 'a' 'A'

//imprimir as variáveis
do{
	printf ("DIGITE UM VALOR INTEIRO\n");
	scanf ("%d",&validar_inteiro);
	
	
}while (validar_inteiro <1 ||validar_inteiro >10 );
	
do{

	printf ("DIGITE VALOR DECIMAL\n");
	scanf ("%f",&validar_real);

}while (validar_real <1 ||validar_real >9.9);

do{

	printf ("DIGITE A\n");
	getchar();
	scanf ("%c",&validar_caracter);

}while (validar_real =='a' ||validar_real =='A');

}
