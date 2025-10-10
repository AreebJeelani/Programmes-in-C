//fibonacci series
#include <stdio.h>
int main()
{
    long long int a, b, c, n, i;
    a=0;
    b=1;
    printf("enter the number of terms");
    scanf("%d", &n);
    printf("%d %d ", a, b);
    for(i=3; i<=n; i++)
    {
        c = a +b;
        printf("%d ",c);
        a=b;
        b=c;
        
    }
    return 0;
    
}