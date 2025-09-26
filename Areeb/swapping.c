#include <stdio.h>
int main(){
   int x, y, temp ;
   printf("enter two numbers");
   scanf("%d%d", &x, &y);
   printf("x = %d, y = %d", x, y);
   temp = x ;
   x = y ;
   y = temp;
   printf("\n numbers after swapping, x = %d, y = %d", x, y);
   return 0;
}