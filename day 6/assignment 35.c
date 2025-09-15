//wacp to print all prime numbers within a certain range
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the starting and ending range respectively: ");
	scanf("%d %d",&a,&b);
	for(int i=a;i<=b;i++)
	{
		int c=0;
		for(int j=1;j<=i/2;j++)
		{
			if(i%j==0)
			   c++;
		}
	    if(c==1)
	        printf("%d, ",i);
	}
	return 0;
}