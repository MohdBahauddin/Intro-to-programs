#include<iostream>
using namespace std;
int main()
{
    int i,j,k,l;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(i+j<=6 || j-i>=4)
                cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    for(k=1;k<=5;k++)
    {
        for(l=1;l<=9;l++)
        {
            if(l<=k || l>=10-k)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
