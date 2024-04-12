#include <stdio.h>

int main (){
	
	float mercadoria, frete,mercadoria1,lucro,custo,porcentagem;
	
	printf ("Digite o valor de custo do produto\n");
	scanf ("%f",&mercadoria);
	
	printf("Digite o valor do frete\n");
	scanf("%f",&frete);
	
	printf ("Agora digite o valor de venda do produto\n");
	scanf ("%f",&mercadoria1);
	
	custo = mercadoria + frete;
	lucro = mercadoria1 - custo;
	porcentagem = (lucro/custo) *100;
	
	printf ("Sua margem de lucro foi de %.0f %\n",lucro);
}
