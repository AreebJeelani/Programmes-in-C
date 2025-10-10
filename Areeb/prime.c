//TO CHECK NUMBER FOR PRIME
#include <stdio.h>
int main()
{
    int n,i, flag ;
    flag = 1;
    printf("enter the number");
    scanf("%d", &n);
    for(i=2; i<=n-1; i++)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }
    }
    if(flag==0)
    {
          printf("%d is not a prime number", n);
    }
    else
    {
        printf("%d is a prime number", n);
    }

    return 0;
    
}