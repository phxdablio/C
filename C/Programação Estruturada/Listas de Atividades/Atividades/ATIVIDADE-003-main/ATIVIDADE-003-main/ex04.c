#include <stdio.h>

int main (){
	int idade;
	
	printf ("Digite sua idade: ");
	scanf ("%d",&idade);
	
	if (idade<16){
		printf("Nao vota");
	}
	if (idade>15 && idade<18){
		printf ("Opcional");
	}
	if (idade>17 && idade !=41 && idade <66 ){
		printf ("Obrigatorio");
	}
	if (idade==41){
		printf ("Somente ganha premio e nao vota!");
	}
	if (idade==88){
		printf ("somente ganha premio e não vota!");
	}
	if (idade>65 && idade != 88){
		printf ("Opcional");
	}
}
