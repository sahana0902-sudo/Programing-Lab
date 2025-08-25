//wacp to display the floor and ceil value of a positive and a negative number
#include<math.h>
#include<stdio.h>
int main()
{
	float a,b;
	printf("enter the positive and the negative number respectively:\n");
	scanf("%f",&a);
	scanf("%f",&b);
	printf("the floor value of %f is: %f and the ceil value  of the same is: %f\n",a,floor(a),ceil(a));
	printf("the floor value of the %f is: %f and the ceil value of the same is: %f",b,floor(b),ceil(b));
	return 0;
}