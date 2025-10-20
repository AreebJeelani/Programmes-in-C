// use of continue and break keyword.
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 10; i++)
    {
        printf("%d\t", i);
        if (i == 5)
        {
            break;
        }
    }
    for (j = 1; j <= 10; j++)
    {
        if (j == 5)
        {
            continue;
        }
        printf("%d\t", j);
    }
    return 0;
}