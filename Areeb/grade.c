#include <stdio.h>
int main()
{
    int marks ;
    printf("enter your marks");
    scanf("%d", &marks);
    if(marks>=80 && marks<=100)
    {
        printf("Your score=%d= A+ grade", marks);
    }
    else if(marks>=70 && marks<80)
    {
        printf("Your score=%d= A grade", marks);
    }
    else if(marks>=60 && marks<70)
    {
        printf("Your score=%d= B grade", marks);
    }
    else if(marks>=50 && marks<60)
    {
        printf("Your score=%d= C grade", marks);
    }
    else if(marks>=40 && marks<50)
    {
        printf("Your score=%d= D grade", marks);
    }
    else if(marks>=30 && marks<40)
    {
        printf("Your score=%d= E grade", marks);
    }
      else if(marks>=0 && marks<30)
    {
        printf("Your score=%d= F grade", marks);
    }
    
    
    return 0;
}