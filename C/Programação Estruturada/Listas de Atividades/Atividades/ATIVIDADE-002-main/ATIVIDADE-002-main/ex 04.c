/* Fa�a um programa que leia o sal�rio de um trabalhador e o valor da 
presta��o de um empr�stimo. Se a presta��o, for maior que 20% do sal�rio, imprima: 
�Empr�stimo n�o concedido.�, caso contr�rio, imprima: �Empr�stimo concedido.� */

#include <stdio.h>

int main (){
	float salario,emprestimo,porcentagem;
	
	printf ("Digite o valor do seu salario: ");
	scanf ("%f",&salario);
	
	printf ("Agora digite o valor da parcela do emprestimo desejado: ");
	scanf ("%f",&emprestimo);
	
	porcentagem = (salario/100) * 10;
	
	if (porcentagem >= emprestimo){
		printf ("Emprestimo autorizado");
	}
	else {
		printf("Emprestimo negado");
	}
	
	
}
