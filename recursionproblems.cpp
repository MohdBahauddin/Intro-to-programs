#include<iostream>
using namespace std;
int fact(int n)
{
    if(n == 0)
        return 1;

    return n*fact(n-1);
}
int power(int n)
{
    if(n == 0)
        return 1;

    return 2*power(n-1);
}
void print(int n)
{

    if(n == 0)
        return ;

    cout<<n<<" ";
    return print(n-1);
}
void reachhome(int src,int dest)
{
     cout<<"source "<<src<<" destination "<<dest<<endl;
    if(src == dest){
        cout<<"reached home "<<endl;
        return;
    }

    reachhome(src+1,dest);
}
int fibonacci(int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;

    int ans = fibonacci(n-1)+fibonacci(n-2);
    return ans;
}
void saydigit(int n,string arr[])
{
    if(n == 0)
        return;

    int digit=n%10;
    n=n/10;

    saydigit(n,arr);

    cout<<arr[digit]<<" ";

}
int getsum(int arr[],int size)
{
    if(size ==0)
        return 0;
    if(size == 1)
        return arr[0];

    int remainingpart=getsum(arr+1,size-1);
    int sum=arr[0]+remainingpart;
    return sum;
}
int main()
{
    int n;
    cin>>n;
    int ans=fact(n);
    cout<<"factorial= : "<<ans<<endl;

    int x=power(n);
    cout<<"power = : "<<x<<endl;

    int y=fibonacci(n);
    cout<<"fibonacci = : "<<y<<endl;

    print(n);
    cout<<endl;
    int src=1;
    int dest=10;

    reachhome(src,dest);

    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int z;
    cin>>z;
    saydigit(z,arr);

    cout<<endl;

    int brr[5]={5,2,6,3,9};
    int size=5;

    int sum=getsum(brr,size);
    cout<<"sum is "<<sum<<endl;

    return 0;
}
