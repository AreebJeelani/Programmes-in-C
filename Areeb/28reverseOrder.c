// Display digits of a number in a reverse order
#include <stdio.h>
int main()
{
    int n, x;
    printf("Enter the number\n");
    scanf("%d", &n);
    while (n > 9)
    {
        x = n % 10;
        printf("%d", x);
        n = n / 10;
    }
    printf("%d \n", n);
    return 0;
}