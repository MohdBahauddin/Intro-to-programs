#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int key)
{
    int start =0;
    int end=size-1;
    int mid;
    mid=start+(end-start)/2;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;

        }
        else if(key>mid)
        {
            start=mid+1;
        }
        else
        {
            start=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}
int main()
{
    int even[6]={1,3,6,8,10,15};
    int odd[5]={3,5,6,8,10};

    int evenindex=binarysearch(even,6,10);
    cout<<"index at 10 is"<<evenindex<<endl;
    int oddindex = binarysearch(odd,5,6);
    cout<<"index at 6 is"<<oddindex<<endl;

    return 0;
}
