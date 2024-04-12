#include <stdio.h>

int main (){
    int a=1;
    int menu,b,c,d,nascimento,horas,minutos,segundo,cal1;

    printf ("Digite 1 para digitar um numero e aparecer somente numeros pares\n");
    printf ("Digite 2 para digitar um numero e aparecer somente numeros impares\n");
    printf ("Digite 3 para sabe se vc nasceu em ano bixesto ou nao\n");
    printf ("Digite 4 para transforma hrs em minutos e segundos\n\n");
    scanf ("%d",&menu);

    switch (menu){
        case 1: 
            printf ("Digite um valor inteiro: \n");
            scanf ("%d",&b);
                while (a<=b){
                     if (a%2==0){
                    printf ("%d\n",a);
                                
                                }
                a++;
                }
        break;

        case 2: 
            printf ("Digite um valor inteiro:  \n");
            scanf ("%d",&d);
                for (c=1;c<=d;c++){
                    if (c%2==1){
                        printf ("%d\n",c);

                }
        }
            break;   
       
        case 3: 
        printf ("Digite o ano em que vc nasceu: \n");
        scanf ("%d",&nascimento);
            if (nascimento%4==0 && nascimento%100!=0 || nascimento%400==0){
                printf ("Voce nasceu em um ano bixesto\n");
            }
              else {
                printf ("Voce nao nasceu em um ano bixesto\n");
              }
        break;
        
        case 4: 
        printf ("Digite somente as horas:  \n");
        scanf ("%d",&horas);

        printf ("Digite os minutos:  \n");
        scanf ("%d",&minutos);

        cal1 = (horas*60)+minutos;
        segundo = cal1 * 60;

        printf ("Os minutos sao : %d\n e os segundos sao: %d",cal1,segundo);
        
        break;

        default: printf ("opcao invalida");

    }


    


}
