#include <stdio.h>

int main() {
   int T,V,R;
   scanf("%d %d %d", &T, &V, &R);
   printf("R = %d\n", R);
   printf("V = %d\n", V);
   printf("T = %d\n", T);
   printf("D = %d\n", V*T);
   printf("L = %d\n", (V*T)/R);
   return 0;
}