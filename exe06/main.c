#include <stdio.h>

int main() {
   int X, Y, Z;
   scanf("%i %i %i", &X, &Y, &Z);

   if ((X<(Y+Z)) && (Y<(X+Z)) && (Z<(X+Y)))
   {
     if (X==Y && X==Z)
      printf("TRIANGULO EQUILATERO\n");
    else if (X!=Y && X!=Z)
      printf("TRIANGULO ESCALENO\n");
    else
      printf("TRIANGULO ISOSCELES\n");
   }

   else
     printf("OS LADOS NAO FORMAM UM TRIANGULO\n");
   return 0;
}