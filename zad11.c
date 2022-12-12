#include <stdio.h>
#include <stdint.h>

int main(){
	int n, i, r;
	float R1, R2;
	time_t t;
	printf("Broi R: ");
    scanf("%d", &n);
	srand((unsigned) time(&t));
   for( i = 0 ; i < n ; i++ ) 
   {
       r = rand();
      printf("R=");
	  scanf("%d", &r);
	  R1 = R1 + r;
	  R2 = 1/R1 + 1/r;
   }
   printf("R1ekv=%.2f\n", R1);
   printf("R2ekv=%.2f\n", R2);
	return 0;
}