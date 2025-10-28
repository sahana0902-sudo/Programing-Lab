//write a c program to find reverse of a number
#include<stdio.h>
int main()
{
	int n,n1=0;
	printf("enter a number: ");
	scanf("%d",&n);
	while(n>0)
	{
		n1=(n1*10)+(n%10);
		n/=10;
	}
	printf("reversed number: %d",n1);
	return 0;
}