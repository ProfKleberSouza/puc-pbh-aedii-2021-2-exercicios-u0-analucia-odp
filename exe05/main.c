#include <stdio.h>

int main() {
   int n1, n2, n3, n4;
   float media;
   scanf("%i %i %i %i", &n1, &n2, &n3, &n4);

   media = (n1+n2+n3+n4)/4.0;
   printf("NOTA = %.1f ", media);

   if(media>=6)
   printf ("(APROVADO)\n");
   else
   printf("(REPROVADO)\n");
   return 0;
}