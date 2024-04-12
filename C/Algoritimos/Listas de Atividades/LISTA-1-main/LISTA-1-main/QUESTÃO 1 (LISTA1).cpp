
#include <stdio.h>
#include <ctype.h>
int main (){
	int horas, minutos, segundos;
	printf("Digite numero de horas");
	scanf("%d", &horas);
	minutos = horas *60;
	segundos = minutos *60;
	printf("minutos %d",minutos);
	printf("segundos %d",segundos);
}
