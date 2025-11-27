// To showcase the use of switch.
#include <stdio.h>
int main(){
    int x, y, i;
    printf("Please enter two numbers\n");
    scanf("%d%d", &x, &y);
    printf("Press 1 for addition , 2 for subtraction and 3 for multiplication\n");
    scanf("%d", &i);
    switch(i){
        case 1:
        i = x+y;
        printf("%d", i);
        break ;
        case 2:
        i = x-y;
        printf("%d", i);
        break;
        case 3:
        i = x*y ;
        printf("%d", i);
        break;
        default :
        printf("Please the right key");
    }
    return 0;
}

