#include <stdio.h>
int main()
{
    int a, b ;
    printf("Enter two numbers");
    scanf("%d%d",&a, &b);
    if(a>b){
        printf("%d is greater than %d",a, b);
    }
    else if(a<b){
        printf("%d is greater than %d", b, a);
    }
    else if(a==b){
        printf("Please enter two different numbers");
        return 0;
    };
}