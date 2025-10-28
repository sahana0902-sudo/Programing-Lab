/*
   *
  * *
 * * *
  * *
   *
*/
#include <stdio.h>
int main()
{
    int n, i, j,k,m;
    printf("enter the range\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j=n;j>i;j--)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
      {
       printf("*");
      } 
     for(m=1;m<i;m++)
          {
            printf("*"); 
          }
         
        printf("\n");

    }
    for (i = 1; i <= n; i++)
    {
        for(j=1;j<i;j++)
        {
            printf(" ");
        }
        for(k=n;k>=i;k--)
    {
        printf("*");
    }
    for(int m=(n-1);m>=i;m--)
    {
        printf("*");
    }
    printf("\n");
    }   
    return 0;
}