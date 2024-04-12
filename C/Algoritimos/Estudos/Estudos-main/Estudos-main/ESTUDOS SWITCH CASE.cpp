//Programa para ver desempeenho a materia de acordo com classificação

 #include <stdio.h>

 int main (void){
 	
     char a;
	 printf ("DIGITE SUA CLASSIFICAcAO\n");
 	 scanf ("%c",&a);
 	 getchar();
 	
 	switch (a){
 		
 		case 'A' : printf ("EXELENTE"); break;
 		case 'a' : printf ("EXELENTE"); break;
 		
		 case 'B' : printf ("OTIMO"); break;
		 case 'b' : printf ("OTIMO"); break;
		 
		 case 'C' : printf ("BOM"); break;
		 case 'c' : printf ("BOM"); break;
		 
		 case 'D' : printf ("REGULAR"); break;
		 case 'd' : printf ("REGULAR"); break;
		 
		case 'E' : printf ("RUIM"); break;
		 case 'e' : printf ("RUIM"); break;
		 
		 case 'F' : printf ("NOS VEMOS ANO QUE VEM ..."); break;
		 case 'f' : printf ("NOS VEMOS ANO QUE VEM ..."); break;
		 
		 default : printf ("OPERADOR INVALIDO");
		 
	 }
 }
 
 //Programa para ver classificação de produto
 
  #include <stdio.h>

 int main (void){
 	
     int a;
	 printf ("[DIGITE QUAL CODIGO APARECE NA EMBALAGEM]\n");
 	 scanf ("%d",&a);
 	 getchar();
 	
 	switch (a){
 		
 		case 1 : printf ("[ALIMENTO NAO-PERECIVEL]"); break;
 		case 2 : printf ("[ALIMENTO PERECIVEL]"); break;
 		case 3 : printf ("[VESTUARIO]"); break;
 		case 4 : printf ("[LIMPEZA]"); break; 
 		
 		default :printf ("[OPERADOR IVALIDO]");
	 }
 }
 
 //Programa para ver quantos dias tem cada mes
 
  #include <stdio.h>
 #include <stdlib.h>
 #include <locale.h>
 
 int main (void){
 	 
 	 int mes;
 	 printf ("[DIGITE O NUMERO CORRESPONDENTE A SEU MÊS PARA SABER QUANTOS DIAS ELE TERA]\n");
 	 scanf ("%d",&mes);
 	 
 	 switch (mes){
 	 	case 1 : printf ("[POSSUÍ 31 DIAS]"); break;
 	 	case '01' : printf ("[POSSUÍ 31 DIAS]"); break;
 	 
 	 	case 2 : printf ("[POSSUÍ 28 DIAS EXETO EM ANO BIXESTO"); break;
 	 	case '02' : printf ("[POSSUÍ 28 DIAS EXETO EM ANO BIXESTO"); break;
 	 	
 	 	case 3 : printf ("[POSSUÍ 31 DIAS]"); break;
 	 	case '03' : printf ("[POSSUÍ 31 DIAS]"); break;
 	 	
 	 	case 4 : printf ("[POSSUÍ 30 DIAS]"); break;
 	 	case '04' : printf ("[POSSUÍ 30 DIAS]"); break;
 	 	
 	 	case 5 : printf ("[POSSUÍ 31 DIAS]"); break;
 	 	case '05' : printf ("[POSSUÍ 31 DIAS]"); break;
 	 	
 	 	case 6 : printf ("[POSSUÍ 30 DIAS]"); break;
 	 	case '06' : printf ("[POSSUÍ 30 DIAS]"); break;
 	 	
 	 	case 7 : printf ("[POSSUÍ 31 DIAS]"); break;
 	 	case '07' : printf ("[POSSUÍ 31 DIAS]"); break;
 	 	
 	 	case 8 : printf ("[POSSUÍ 31 DIAS]"); break;
 	 	case '08' : printf ("[POSSUÍ 31 DIAS]"); break;
 	 	
 	 	case 9 : printf ("[POSSUÍ 30 DIAS]"); break;
 	 	case '09': printf ("[POSSUÍ 30 DIAS]"); break;
 	 	
 	 	case 10 : printf ("[POSSUÍ 31 DIAS]"); break;
 	 	
 	 	case 11: printf ("[POSSUÍ 30 DIAS]"); break;
 	 	
 	 	case 12: printf ("[POSSUÍ 31 DIAS]"); break;
 	 	
 	 	default : printf ("[OPERADOR INVÁLIDO]");
 	 }
 }
 
 
