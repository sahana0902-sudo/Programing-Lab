//wacp to find the sum of n natural numbers
#include<stdio.h>
int main()
{
	int n,s=0;
	printf("enter the number of terms: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		s+=i;
	}
	printf("sum= %d",s);
	return 0;
}