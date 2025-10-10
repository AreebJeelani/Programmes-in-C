//DISPLAY SERIES
#include <stdio.h>
#include <math.h>
int main()
{
    int n,i, result;
    printf("enter the number of terms");
    scanf("%d",&n);
    for(i=1; i <=n; i++){
        result = pow(2,i);
          printf("%d\t", result);
    }
  
    return 0;
}