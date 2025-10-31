//Display contents of a character array.
#include<stdio.h>
int main()
{
    char arr[100], n, i;
    printf("Enter the number of characters");
    scanf("%d",&n);
    //Read the values from the user, note that .
    printf("Enter the characters\n");
    for(i=0; i<=n; i++)
    {
        scanf("%c",&arr[i]);
    }
    //Print the values.
     for(i=0; i<=n; i++){
        printf("%c\t", arr[i]);
     } 
      return 0;
}