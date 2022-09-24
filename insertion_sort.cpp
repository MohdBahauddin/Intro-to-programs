#include<iostream>
using namespace std;
int insertion_st(int arr[],int n)
{
    int i,j;
    for(i=1;i<n;i++)
    {
       int temp= arr[i];
        int j=i-1;
        for(;j>=0;j--)
        {
            if(arr[j] > temp)
            {


                arr[j+1]=arr[j];
            }

        else{
            break;
        }

    }

    arr[j+1]=temp;
    }
    return 0;
}
int main()
{
    int n;
    int arr[5]={34,23,56,76,45};
    insertion_st(arr,5);
    cout<<"sorted array is "<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
