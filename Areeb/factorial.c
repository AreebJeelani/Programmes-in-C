//TO WRITE THE FACTORIAL OF A NUMBER
#include <stdio.h>
int main()
{
    int i, n, fact ;
    fact=1;
    printf("enter the number of which factorial is to be found");
    scanf("%d", &n);
    for (i=1; i<=n; i++)
    {
        fact *= i;
    }
    printf("factorial of %d = %d", n, fact);
    return 0;
}