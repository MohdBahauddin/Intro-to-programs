#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {

        for(j=1;j<=9;j++)
        {
            if(j<=i || i+j>=10 )
            {
                cout<<"*";

            }
            else{
                cout<<" ";

            }
        }
        cout<<endl;
    }
}

