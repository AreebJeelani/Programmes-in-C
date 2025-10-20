/*to display this pattern
 *
 **
 ***
 ****
 */
#include <stdio.h>
int main()
{
    int i, j, space, rows;
    printf("Enter the number of rows ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++)
    {
        for (space = i; space < rows; space++) // important revise
        {
            printf("1");
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}