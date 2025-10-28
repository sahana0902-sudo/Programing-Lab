/*
4321
432
43
4
*/
#include<stdio.h>
int main()
{
	for(int i=1;i<=4;i++)
	{
		for(int j=4;j>=i;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}