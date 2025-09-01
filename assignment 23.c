#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the 3 numbers ");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if(a>b)
	{
		if(a>c)
		{
		printf("%d is greatest",a);
	    }
	}
	else if(b>a)
	{
		if(b>c)
		{
		printf("%d is the greatest",b);
	    }
	}
	else
	{
		printf("%d is greatest",c);
	}
	return 0;
}
