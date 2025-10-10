//ANOTHER SERIES
#include <stdio.h>
#include <math.h>
long long int main()
{
    int n,i;
    long long int result;
    printf("enter the number of terms");
    scanf("%d",&n);
    for(i=0; i <=n; i++)
    {
        result = pow(2,pow(2,i));
          printf("%lld\t", result);
    }
  
    return 0;
}