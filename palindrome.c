#include<stdio.h>
int main()
{
    int n,m,rev=0,rem;
    printf("Enter the number ");
    scanf("%d",&n);
    m=n;
    while(m>0)
    {
        rem=m%10;
        m=m/10;
        rev=rev*10+rem;
    }
    if(n==rev)
        printf("the number %d is palindrome number ",n);
    else
        printf("number is not palindromne number");
    return 0;
}
