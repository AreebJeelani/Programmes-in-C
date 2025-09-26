#include <stdio.h>
int main()
{
	int a,b,c,obt;
	float p;
	printf("Enter the marks of particular sub:");
	scanf("%d%d%d%d",&a,&b,&c,&obt);
	printf("obtained marks=%d\n",obt);
	p=(a+b+c/obt)*100;
	printf("The Percentage of the student is:%f\n",p);
	if(p>=80)
		{printf("Grade a\n");}
	else if((p>=60)&&(p<=79))
		{printf("Grade b\n");}
	else if((p>=40)&&(p<=59))
		{printf("Grade c\n");}
	else
		{printf("Grade F\n");}
	return 0;
}
