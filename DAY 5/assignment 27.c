//wacp to calculate the total salary of an employee using if-else. 
#include<stdio.h>
int main()
{
	float s,hra,da,ta,a1,s1;
	printf("enter the basic salary: ");
	scanf("%f",&s); 
	da=(5*s)/100;
	ta=(10*s)/100;
	a1=s+da+ta;       
	if (s>15000)
	{
		hra=(20*s)/100;
		s1=a1+hra;
		printf("salary of employee: %f", s1);
	}
	printf("salary of employee: %f",a1);
	return 0;
}