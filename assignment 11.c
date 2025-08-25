//wacp to find the last digit of two numbers, one using modulus and the other without using it
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter first number:");
	scanf("%d",&a);
	printf("enter second number:");
	scanf("%d",&b);
	printf("the last digit of the 1st number is: %d\n",a%10);
	printf("the last digit of the second number is: %d",b-(b/10)*10);
	return 0;
}