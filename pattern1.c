#include<stdio.h>
int main()
{
    int i,j,rows,n=1;
    printf("enter number of rows : ");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%C",64+n);
            n++;
        }
        printf("\n");
    }
    return 0;
}
