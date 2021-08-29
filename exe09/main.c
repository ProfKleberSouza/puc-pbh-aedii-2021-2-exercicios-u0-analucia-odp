#include <stdio.h>
#include "string.h"

int main() {

  struct Aluno
  {
    float nota;
    char nome[100];
  };

  struct Aluno aluno[100]; //declarando um vetor do tipo struct Aluno

   int n, c1=0, c2=0, c3=0;
   float media=0, m1=0, m2=0, m3=0;
   scanf("%d", &n);

   for(int cont=0; cont<n; cont++)
   {
     scanf ("%s %f", aluno[cont].nome, &aluno[cont].nota);

     if (aluno[cont].nota>m1)
     {
       m3 = m2;
       m2 = m1;
       m1 = aluno[cont].nota;
       
       c3 = c2;
       c2 = c1;
       c1 = cont;
     }
     else if (aluno[cont].nota>m2)
     {
       m3 = m2;
       m2 = aluno[cont].nota;
       
       c3 = c2;
       c2 = cont;
     }
     else if(aluno[cont].nota>m3)
     {
       m3 = aluno[cont].nota;
       c3 = cont;
     }

     media = media+aluno[cont].nota;
    }

    printf("NOTA MEDIA = %.1f\n", media/n);
    printf ("%s %.1f\n", aluno[c3].nome, m3);
    printf ("%s %.1f\n", aluno[c2].nome, m2);
    printf ("%s %.1f\n", aluno[c1].nome, m1);
   return 0;
}