#include <stdio.h>
int main()
{
    int a ;
    printf("enter a number");
    scanf("%d", &a);
    if(a%2==0){
        printf("The number entered = %d is even", a);
    }else if(a%2!=0){
        printf("The number entered = %d is odd", a);
    }else if(a==0){
        printf("%d is neither even nor odd", a);
    }
    return 0;

}