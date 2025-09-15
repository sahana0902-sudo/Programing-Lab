//wacp to print fibonacci series upto n terms
#include<stdio.h>
int main()
{
	int n,a=0,b=1;
	printf("enter the terms: ");
	scanf("%d",&n);
	for(int i=1;i<n;i++)
	{
		printf("%d, ",a+b);
		int s=a+b;
		a=b;
		b=s;
	}
	return 0;
}