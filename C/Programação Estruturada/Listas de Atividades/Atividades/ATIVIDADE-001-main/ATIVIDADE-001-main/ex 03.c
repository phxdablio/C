#include <stdio.h>

int main (){
	
	float area,altura,largura,x;
	float consumo = 0.3;
	int lata = 2;
    int resultado;
	
	printf("Digite a altura da parede\n");
	scanf("%f",&altura);
	
	printf("Digite a largura da parede\n");
	scanf("%f",&largura);
	
	area = altura*largura;
	x = area*consumo;
	resultado = x/lata;
	
	printf ("A quantidade de latas necessarias sao de %d\n",resultado);
}
