//FIND FACTORS OF A NUMBER
#include <stdio.h>
int main()
{
    int i, n;
    
    printf("enter the number of which factorial is to be found");
    scanf("%d", &n);
    for (i=1; i<=n; i++)
    {
      if(n%i==0)
      {
        printf("%d",i);
      }
    }
    return 0;
}