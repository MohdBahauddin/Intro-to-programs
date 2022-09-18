#include<stdio.h>
int main()
{
    int i,j,a[2][3];
    printf("enter the elements of array ");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",a[i][j]);
        }
    }
    printf("the elements of array are ");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",a[i][j]);
        }
    }
    return 0;

}
