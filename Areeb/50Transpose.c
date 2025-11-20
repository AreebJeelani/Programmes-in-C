// To find transpose of a matrix.
#include <stdio.h>
int main()
{
    int i, j, n, m;
    int a[10][10];
    printf("Enter the number of rows and columns \n");
    scanf("%d%d", &m, &n);
    // Reading the elements from the user.
    printf("Enter the elements of the first row\n");
    for (j = 1; j <= m; j++)
    {
        for (i = 1; i <= n; i++)
        {
            scanf("%d", &a[i][j]);
        }
        if (j <= m - 1)
        {
            printf("Enter the elements of the next row\n");
        }
    }
    // displaying the transpose of the matrix.
    printf("The transpose matrix is\n");
    for (j = 1; j <= m; j++)
    {
        for (i = 1; i <= n; i++)
        {
            printf("%d\t", a[j][i]);
        }
        printf("\n");
    }
    return 0;
}
