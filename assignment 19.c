#include<stdio.h>
int main()
{
	int a;
	printf("enter the number: ");
	scanf("%d",&a);
	if(a>=0)
	{
		printf("whole number");
	}
	else
	{
		printf("not a whole number");
	}
	return 0;
}
