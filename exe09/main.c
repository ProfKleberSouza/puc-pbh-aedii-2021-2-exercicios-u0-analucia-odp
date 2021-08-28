#include <stdio.h>
#include "string.h"

int main() {

  struct Aluno
  {
    int nota;
    char nome[100];
  };

  struct Aluno aluno[100];

   int n;
   float media=0;
   scanf("%d", &n);

   for(int cont=0; cont<n; cont++)
   {
     scanf ("%s %d", aluno[cont].nome, &aluno[cont].nota);

     media = media+aluno[cont].nota;
    }

    printf("NOTA MEDIA = %.1f", media/n);
   return 0;
}