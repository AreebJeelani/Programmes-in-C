//Find product
#include <stdio.h>
#include <math.h>
int main()
{
    int n,i, result =1;
    printf("enter the number of terms");
    scanf("%d",&n);
    for(i=1; i <=n; i++){
        result = result*i;
    }
    printf("product= %d", result);
  
    return 0;
}