/*
    10
   98
  765
 4321
*/
#include <stdio.h>
int main() 
{
	int n=10;
	for(int i=5,a=1;i>=1,a<=5;i--,a++)
	{
		for(int j=1;j<i;j++)
		{
			printf(" ");
		}
		for(int k=1;k<=a;k++)
		{
			printf("%d",n);
			n--;
		}
		printf("\n");
	}
	return 0;
}