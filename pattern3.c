#include<iostream>
using namespace std;
int main()
{
    for(int i=4;i>=1;i--)
    {
        for(int j=1;j<=4;j++)
        {
            if(i+j>=5)
            {
                cout<<"* ";
            }
            else
            {
                cout<<" ";
            }


        }
        cout<<endl;
    }
}
