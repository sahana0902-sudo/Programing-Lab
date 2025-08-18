//wacp to convert celsius temperature to fahrenheit and vice versa
#include<stdio.h>
int main()
{
    float f,c,f1,c1;
    printf("enter the temperature in celsius: ");
    scanf("%f",&c);
    printf("enter the temperature in fahrenheit: );
    scanf("%f",&f);
    f1=(c*(9/5))+32;
    c1=(f-32)*(5/9);
    printf("the temperature coverted to fahrenheit is %f and temperature converted to celsius is %f", f1, c1);
    return 0;
}
