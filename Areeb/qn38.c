//Display an integer array.
#include<stdio.h>
int main()
{
    int a[100], n, i;
    printf("Enter the value of n");
    scanf("%d",&n);
    //Read the values from the user.
    printf("Enter the vlaues\n");
    for(i=0; i<=n-1; i++)
    {
        scanf("%d",&a[i]);
    }
    //Print the values.
     for(i=0; i<=n-1; i++){
        printf("%d\t", a[i]);
     } 
      return 0;
}