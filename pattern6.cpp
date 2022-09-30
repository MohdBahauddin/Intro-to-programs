#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {

        for(j=5;j>=i;j--)
        {
         cout<<"*";
        }
        cout<<endl;
    }
    for(int k=1;k<=5;k++)
    {
        for(int l=1;l<=k;l++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
