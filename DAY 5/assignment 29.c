//wacp to calculate the total salary of an employee using if-else. 
#include<stdio.h>
int main()
{
	float m;
	printf("enter the marks: ");
	scanf("%f",&m); 
		if(m>=95)
		{
		 printf("grade A+");
	    }
		else if(m>=90&&m<95)
		{		 
		printf("grade A");
	    }
		else if(m>=80&&m<90) 
		{	
		printf("grade B");
		}
		else if(m>=70&&m<80)
		{
			printf("grade C");
		}
		else
		{
			printf("grade F");
		}
	return 0;
}