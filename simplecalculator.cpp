#include<stdio.h>
int main()
{
    char operator ;
    double first,second;
    printf ("enter the operator (+,-,*,/) : \n");
    scanf("%c",&operator);
    printf("enter the two numbers one by one : \n");
    scanf("%lf %lf ",&first , &second);
    switch (operator)
    {


case '+' :
    printf("%lf + %lf = %lf",first,second,(first + second));
    break;
case '-' :
    printf("%lf - %lf = %lf",first,second,(first-second));
    break;
case '*' :
    printf("%lf * %lf = %lf",first,second,(first*second));
    break;
case '/' :
    if (second==0.0)
    {
        printf("math nahi aati kya bsdk engineer banege betichod \n");
    }
    else
    {


    printf("%lf / %lf = %lf",first,second,(first/second));
    }
    break ;
default :
    printf("invalid operator");
    }
    return 0;

}
