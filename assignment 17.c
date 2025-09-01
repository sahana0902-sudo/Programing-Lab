#include<stdio.h>
int main()
{
	int a,b;
	printf("enter 2 numbers: ");
	scanf("%d",&a);
	scanf("%d",&b);
	if (a>b)
	{
		printf("%d is greater",a);
	}
	else
	{
		printf("%d is greater",b);
	}
	return 0;
}
