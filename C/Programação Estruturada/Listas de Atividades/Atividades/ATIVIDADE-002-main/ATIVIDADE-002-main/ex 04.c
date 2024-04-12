/* Faça um programa que leia o salário de um trabalhador e o valor da 
prestação de um empréstimo. Se a prestação, for maior que 20% do salário, imprima: 
“Empréstimo não concedido.”, caso contrário, imprima: “Empréstimo concedido.” */

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
