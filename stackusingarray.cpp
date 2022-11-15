#include<iostream>
using namespace std;
class stack
{
public:
    int * arr;
    int top;
    int size;

    stack(int size){
    this->size=size;
    arr=new int [size];
    top=-1;
    }
void push(int element)
{
    if(size-top > 1)
    {
        top++;
        arr[top]=element;
    }
    else
        cout<<"stack overflow "<<endl;
}
void pop()
{
    if(top >= 0)
        top--;
    else
        cout<<"stack underflow "<<endl;

}
int peak()
{
    if(top >= 0)
        return arr[top];
    else
    {
        cout<<"stack is empty "<<endl;
        return -1;
    }
}
bool isempty()
{

    if(top == -1)
    return true;
    else
        return false;
}
};
int main()
{
    stack st(5);

    st.push(20);
    st.push(25);
    st.push(30);
    st.push(40);
    st.push(45);
    st.push(50);

    cout<<st.peak()<<endl;

    st.pop();
    cout<<st.peak()<<endl;

    st.pop();
    cout<<st.peak()<<endl;

    st.pop();
    cout<<st.peak()<<endl;

    st.pop();
    cout<<st.peak()<<endl;

    st.pop();
    cout<<st.peak()<<endl;

    if(st.isempty())
    {
        cout<<"stack is empty "<<endl;
    }
    else
        cout<<"stack is not emoty "<<endl;

}
