//wacp to calculate SI
#include<stdio.h>
int main()
{
    float p,r,t,s;
    printf("enter the principal amount, rate of interest and time:\n");
    scanf("%f",&p);
    scanf("%f",&r);
    scanf("%f",&t);
    s=(p*r*t)/100;
    printf("the simple interest is:%f",s);
    return 0;
}
