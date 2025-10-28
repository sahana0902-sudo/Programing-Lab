//write a c program to check whether a number is a palindrome number or not
#include<stdio.h>
int main()
{
	int n,n1=0,n2;
	printf("enter a number: ");
	scanf("%d",&n);
	n2=n;
	while(n>0)
	{
		n1=(n1*10)+(n%10);
		n/=10;
	}
	(n2==n1)?printf("palindrome number"):printf("not a palindrome number");
	return 0;
}
	