//wacp to swap two numbers using a third variable
#include<stdio.h>
int main()
{
   int a,b,c;
   printf("enter the value of a and b respectively");
   scanf("%d",&a);
   scanf("%d",&b);
   c=a;
   a=b;
   b=c;
   printf("the value of a is %d and the value of b is %d", a,b);
   return 0;
}
