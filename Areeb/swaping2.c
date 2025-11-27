// swapping of  two numbers without external varaible.
#include <stdio.h>
int main(){
   int x, y, temp ;
   printf("enter two numbers");
   scanf("%d%d", &x, &y);
   printf("x = %d, y = %d", x, y);
   x = x-y ;
   y = y + x;
   printf("\n numbers after swapping, x = %d, y = %d", x, y);
   return 0;

}
