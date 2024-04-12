#include<stdio.h>
int main(){
	
	int n, maior = 0, menor = 1000;
	int media;
	
	printf("[DIGITE UM NUMERO]\n");
	scanf("%d", &n); // 22
	
	while (n > 0){	//f
		if (n >= maior) // 52 >= 22
			maior = n; // maior = 52;
		
		if (n < menor) // 52 < 22
			menor = n;	// menor = 22
		
		printf("[DIGITE OUTRO NUMERO]\n");	
		scanf("%d", &n); // -5
		
		getchar();
	}
	
	printf("[MAIOR :%d]\n", maior);
	printf("[MENOR :%d]\n", menor);
	
	media = (maior + menor) /2;
	printf ("[A MEDIA E DE %d]\n",media);
}
