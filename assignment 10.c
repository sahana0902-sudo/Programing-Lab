//wacp to swap two numbers without using a third variable
#include<stdio.h>
int main()
{
   int a,b;
   printf("enter the value of a and b respectively");
   scanf("%d",&a);
   scanf("%d",&b);
   a=a+b;
   b=a-b;
   a=a-b;
   printf("the value of a is %d and the value of b is %d", a,b);
   return 0;
}
