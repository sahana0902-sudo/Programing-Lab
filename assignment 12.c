//wacp to calculate compound intrest
#include<math.h>
#include<stdio.h>
int main ()
{
    float a,p,r,n,t;
	printf("enter the principal amount: ");
	scanf("%f",&p);
	printf("enter the rate: ");
	scanf("%f",&r);
	printf("enter the no. of times the value is compounded per year: ");
	scanf("%f",&n);
	printf("enter the time: ");
	scanf("%f",&t);
	a=p*(pow(1+r/n,n*t));
	printf("the final amount is: %f",a);
	return 0;
}