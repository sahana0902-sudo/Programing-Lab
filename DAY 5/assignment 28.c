//wacp to calculate the total salary of an employee using if-else. 
#include<stdio.h>
int main()
{
	float unit;
	printf("enter the units consumed: ");
	scanf("%f",&unit); 
		if(unit>0&&unit<=100)
		{
		 printf("bill: %f",5*unit);
	    }
		if(unit>100&&unit<=200)
		{		 
		printf("bill: %f",7*unit);
	    }
		if(unit>200) 
		{	
		printf("bill: %f",10*unit);
		}
	return 0;
}