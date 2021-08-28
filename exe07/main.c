#include <stdio.h>

int main() {
   int n1, n, maior, menor;

   scanf("%d", &n1);

   for (int cont=0; cont<n1; cont++)
   {
      scanf("%d", &n);

      if (cont==0)
      {
        maior=n;
        menor=n;
      }

      if(maior<n)
        maior=n;
      if (menor>n)
        menor=n;         
   }

   printf("MENOR = %d\n", menor);
   printf("MAIOR = %d\n", maior);
   return 0;
}