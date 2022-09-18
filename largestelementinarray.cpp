#include<stdio.h>
int returnmax(int array[], int n)
{
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(array[i]>max)
        {
            max=array[i];
        }
    }
    return max;
}
int main()
{
    int arr[]={1,3,5,6,78,86,4,25};
    int max=returnmax(arr,8);
    printf("the maximum element in this array is %d ", max);
    return 0;
}
