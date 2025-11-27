// To calculate the roots of a quadratic equation.
#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, d, r1,  r2 ;
    printf("enter value of a, b, and c");
    scanf("%f%f%f", &a, &b, &c);
    d = (b*b-4*a*c) ;

    if(d>0)
    {
        r1 = (-b+sqrt(d))/2*a ;
        r2 = (-b-sqrt(d))/2*a ;
        printf("The equation has two roots = %f and %f", r1, r2);
    }
    else if(d<0)
    {
        printf("The equation has two imaginary roots");
    }
    else if(d==0)
    {
        r1= -b/2*a;
        printf("The equation has both equal roots= %f", r1);
    }
    return 0;


}
