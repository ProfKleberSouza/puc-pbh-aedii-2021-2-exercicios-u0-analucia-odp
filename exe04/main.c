#include <stdio.h>

int main() {
   int a, b, c, maior, menor;
   scanf("%i %i %i", &a, &b, &c);

   if (a>b && a>c)
   maior=a;
   else if (b>a && b>c)
   maior=b;
   else
   maior=c;

   if(a<b && a<c)
   menor=a;
   else if (b<a && b<c)
   menor=b;
   else
   menor=c;

   printf("MENOR = %d\n", menor);
   printf("MAIOR = %d\n", maior);
   return 0;
}