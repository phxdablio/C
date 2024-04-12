#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
   float raio,area;
   float pi = 3.14;
  printf ("RAIO =");
  scanf("%f", &raio);
  area = raio * raio* pi;
  printf("Resultado da area %f", area);
}
