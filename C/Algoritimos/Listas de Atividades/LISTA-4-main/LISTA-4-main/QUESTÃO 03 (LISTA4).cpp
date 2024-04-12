#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int main (){

int numero,i,impar;

printf("[DIGITE UM NUMERO DESEJADO]\n");
scanf ("%d",&numero);

for (i = 0; i <=10; i++){
	if ( i % 2 ==1)
	{
		printf ("%d\n",i);
		impar = impar +1;
	}
}
}
