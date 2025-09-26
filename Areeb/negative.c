#include <stdio.h>
int main()
{
    int a ;
    printf("enter a number");
    scanf("%d", &a);
    if(a<0){
        printf("The number entered = %d is negative", a);
    }else if(a>0){
        printf("The number entered = %d is positive", a);
    }else if(a==0){
        printf("enter number other than %d", a);
    }
    return 0;

}