#include <stdio.h>

int main() {
   int v[10];

   for (int pos=0; pos<10; pos++)
     scanf ("%d", &v[pos]);

    for (int pos=9; pos>=0; pos--)
      printf("%d\n", v[pos]);
   return 0;
}