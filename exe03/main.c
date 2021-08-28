#include <stdio.h>

int main() {
   int n1;
   scanf("%i", &n1);
   
   if (n1%2==0)
   {
     if(n1>0)
       printf("NUMERO PAR POSITIVO\n");
     else if(n1<0)
      printf("NUMERO PAR NEGATIVO\n");
     else
       printf("NUMERO NEUTRO\n");
   }
   else
   {
     if (n1>0)
      printf("NUMERO IMPAR POSITIVO\n");
      else
      printf("NUMERO IMPAR NEGATIVO\n");
   }
   return 0;
}