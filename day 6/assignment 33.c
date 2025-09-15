//wacp to find the factorial of a number
#include<stdio.h>
int main()
{
	int n,p=1;
	printf("enter the number: ");
	scanf("%d",&n);
	for(int i=n;i>=1;i--)
	{
		p*=i;
	}
	printf("factorial of %d is= %d",n,p);
	return 0;
}