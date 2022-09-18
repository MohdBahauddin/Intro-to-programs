#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter any character "<<endl;
    cin>>ch;

    cout<<"ASCII value is "<<endl;
    cout<<static_cast<int>(ch)<<endl;

}
