#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,len;
    char ch[]="I AM AN ENGINEER ";
    len=strlen(ch);
    for(i=0;i<len;i++)
    {
        for(j=0;j<=i;j++)
        {
           printf("%c",ch[j]);
        }
        printf("\n");
    }
}
