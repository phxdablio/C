#include <stdio.h>

int main (){
	int idade;
	printf ("Digite sua idade: ");
	scanf("%d",&idade);
	
	if (idade<21){
		printf ("Jovem");
	}
	if (idade>20 && idade <71){
		printf ("Adulto");
	}
	if (idade >70){
		printf("Novas 50");
	}
}

