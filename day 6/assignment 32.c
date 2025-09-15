//wacp to find the multiplication table of a number
#include<stdio.h>
int main()
{
	float f;
	printf("enter a number: ");
	scanf("%f",&f);
	for(float i=1;i<=10;i++)
	{
		printf("%f * %f =%f\n",f,i,f*i);
	}
	return 0;
}