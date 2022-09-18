#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int n,rem,m,result=0;
    printf("Enter any number : ");
    scanf("%d",&n);
   m=n;
    while(m>0)
    {
        rem = m%10;
        m=m/10;
        result = result + rem*rem*rem;

    }
    if ( result == n)
        printf("%d number is armstrong number ",n);
        else
        printf("%d number is not armstrong number ",n);
    getch();
}
