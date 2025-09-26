#include <stdio.h>
int main()
{
	int a;
	printf("Enter the Number");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("The Number is even");
	}
	if(a%2!=0)
	{
		printf("The number is odd");
	}
	return 0;
}
