//wacp to find the real root of a quadratic equation
#include<stdio.h>
#include<math.h>
int main()
{
	
	float a,b,c,d,x;
	printf("enter a:");
	scanf("%f",&a);
	printf("enter b:");
	scanf("%f",&b);
	printf("enter c:");
	scanf("%f",&c);
	d=sqrt((b*b)-(4*a*c));
	x=(d-b)/(2*a);
	printf("the root of the quation is: %f",x);
	return 0;
}