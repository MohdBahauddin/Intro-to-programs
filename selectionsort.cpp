#include<bits/stdc++.h>
using namespace std;
int * selectionsort(int  * arr,int n)
{
    int minindex,i;

    for(i=0;i<n-1;i++)
    {
         minindex=i;

    for(int j=i+1;j<n;j++)
    {
        if(arr[j]<arr[minindex])
            minindex=j;

    }
    swap(arr[minindex],arr[i]);
    }
    return arr;
}
int main()
{
    int arr[5]={25,13,10,50,45};
    selectionsort(arr,5);
    for(int i = 0; i < 5; i++)
    {
    cout<<"->"<<arr[i]<<endl;
    }
    return 0;
}
