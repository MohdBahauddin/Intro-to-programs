#include<iostream>
using namespace std;
int bubble_st(int arr[],int n)
{

    int i,j;
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }

    return 0;
}
int main()
{
    int n;
    int arr[5]={50,25,23,45,9};
    bubble_st(arr,5);
    for(int i=0;i<5;i++)
    {
        cout<<" "<<arr[i];
    }
    return 0;
}
