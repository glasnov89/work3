#include <stdio.h>
#include <stdint.h>

int main(){
	int n = 20;
	int m = 20;
for (int i = 0; i <= 20; i+=2){
printf("%d  ", i);
}
printf("\n");
while ( n <= 30){
printf("%d  ", n);
n+=2;
}
printf("\n");
for (int i = 10; i <= 100; i+=5){
printf("%d  ", i);
}
printf("\n");
do
{
 printf("%d  ", m);   
 m-=2;
}
while(m>=10);

printf("\n");
for (int i = 1000; i >= 0; i-=100){
printf("%d  ", i);
}
return 0;
}