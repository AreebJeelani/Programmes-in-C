//Table of numbers using nesting of loops
#include <stdio.h>
int main()
{
   int i, j, x;
   for(i=2; i<=10; i++)
   {
        for(j=1; j<=10; j++)
        {
           x = i*j;
           printf("%d * %d = %d\n", i,j,x);
        }
        printf("\n\n");
        
   }
   return 0;

}
