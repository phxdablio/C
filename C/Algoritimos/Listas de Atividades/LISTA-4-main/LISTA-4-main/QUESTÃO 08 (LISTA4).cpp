#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int main (){

int v1,v2,v3,v4,v5,v6,v7,v8,v9,v10,resultado,media;

printf ("[DIGITE 10 VALORES DESEJADOS]\n");
scanf ("%d%d%d%d%d%d%d%d%d%d",&v1,&v2,&v3,&v4,&v5,&v6,&v7,&v8,&v9,&v10);
resultado = v1 + v2 + v3 + v4 + v5 + v6 + v7 + v8 + v9 + v10;
media = (resultado = v1 + v2 + v3 + v4 + v5 + v6 + v7 + v8 + v9 + v10)/10;

printf ("RESULTADO E %d E A MEDIA E %d",resultado,media);
}
