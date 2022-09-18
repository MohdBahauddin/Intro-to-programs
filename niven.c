#include<stdio.h>
int main()
{
    int n,m,rem,sum=0;
    printf("enter any number ");
    scanf("%d",&n);
    m=n;
    while(m>0)
    {
        rem=m%10;
        m=m/10;
        sum=sum+rem;
    }
    if(n%sum==0)
        printf("the number %d is niven number ",n);
    else
        printf("the number is not niven number");
    return 0;
}
