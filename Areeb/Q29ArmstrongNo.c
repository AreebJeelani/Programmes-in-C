#include <stdio.h>
#include <math.h>
int main()
{
    int orgNumber, n, x, i, count = 0, sum = 0;
    printf("enter the number");
    scanf("%d", &n);
    orgNumber = n;
    // to calculate number of digits of the number entered.
    while (orgNumber != 0)
    {
        x = orgNumber % 10;
        orgNumber = orgNumber / 10;
        count++;
    }
    // to check for armstrong no.
    orgNumber = n;
    while (orgNumber != 0)
    {
        x = orgNumber % 10;
        sum += pow(x, count);
        orgNumber = orgNumber / 10;
    }
    if (sum == n)
    {
        printf("%d is an armstrong number\n", n);
    }
    else
    {
        printf("%d is not an armstrong number\n", n);
    }
    return 0;
}