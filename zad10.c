#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
   int i, n, r, max, min;
   float P, S;
   time_t t;
   S = 0;
   n = 20;
   max = 0;
   min = 20;
   srand((unsigned) time(&t));
   for( i = 0 ; i < n ; i++ ) 
   {
       r=rand() % 20;
      printf("%d ", r);
       S = S + r;
       P = S / 20;
	   if (r > max )
	   {
		   max = r;
	   }
	   if (r < min )
	   {
		   min = r;
	   }
   }
 
   printf("\nSbor:%.1f ", S);
   printf("\nSredno:%.2f ", P);
   printf("\nMax:%d ", max);
   printf("\nMin:%d ", min);
   return 0;
}