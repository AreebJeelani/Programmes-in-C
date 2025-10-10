#include <stdio.h>
int main()
{
    int a =1, n, i;
     printf("enter the value of n");
      scanf("%d", &n);
      printf("%d\t",a);
        for(i=2; i<=n; i+=2)
        {
        
            printf("+ 1/%d\t", i);
        }
        return 0;

}