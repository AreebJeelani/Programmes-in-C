// Display length of a string.
#include <stdio.h>
int main()
{
    char str[100];
    printf("Enter the string\n");
    scanf("%s", &str);
    int length =0;
    while(str[length]!='\0')
    {
       length++; 
    }
    // Print the string.

    printf("Length of the String %s is %d", str, length);

    return 0;
} 