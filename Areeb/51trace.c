// To find the dum of diagonal elements of a matrix.
#include <stdio.h>
int main()
{
    int i, j, n, m, sum = 0;
    int a[10][10];
    printf("Enter the number of rows and columns \n");
    scanf("%d%d", &m, &n);
    // Reading the elements from the user.
    printf("Enter the elements of the first row\n");
    for (j = 0; j < m; j++)
    {
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i][j]);
        }
        if (j < m - 1)
        {
            printf("Enter the elements of the next row\n");
        }
    }
    // displaying the matrix.
    printf("The resultant matrix is\n");
    for (j = 0; j < m; j++)
    {
        for (i = 0; i < n; i++)
        {
            printf("%d\t", a[i][j]);
            if (i == j)
            {
                sum = sum + a[i][j];
            }
        }
        printf("\n");
    }
    printf("The sum of the diagonal elements is %d\t", sum);

    return 0;
}