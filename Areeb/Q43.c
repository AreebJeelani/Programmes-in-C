// Display a string array from the user in reverse order.
#include <stdio.h>
int main()
{
    char str[100];
    printf("Enter the string\n");
    scanf("%s", &str);

    // Print the string.
    int i=0, n;
while(str[i]!='\0')
{
    i++;
}
i = n;
   for(i=n-1; i>=0; i--)
   {
    printf("%c", str[i]);
   }

    return 0;
}