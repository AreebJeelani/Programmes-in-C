//to check whether number is positive or negative.
#include <stdio.h>
int main()
{
	int a;
	printf("Enter the no.");
	scanf("%d",&a);
	if(a>0)
	{
		printf("The given no. is positive");
	}
	if(a<0)
	{
		printf("The given no. is negative");
	}
	if(a==0)
	{
		printf("The given no. is zero");
	}
	return 0;
}

