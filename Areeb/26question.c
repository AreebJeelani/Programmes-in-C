//DISPLAY 12345 12345 UPTO N TERMS
#include <stdio.h>
int main()
{
    int i, j, n;
    printf("enter the value of n");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=5; j++)
        {
            printf("%d", j);
        }
        printf("\t");
    }
    return 0;
}

