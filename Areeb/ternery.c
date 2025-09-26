#include <stdio.h>
int main(){
    int x, y ;
    printf("Please enter two numbers");
    scanf("%d%d", &x, &y);
    x > y ? printf("%d is greater than %d", x, y) : printf("%d is smaller than %d", x, y);
   
    return 0;
}