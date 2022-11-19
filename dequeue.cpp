#include<iostream>
#include<queue>
using namespace std;
int main()
{
    deque<int> d;
    d.push_front(15);
    d.push_front(10);
    d.push_back(20);

    cout<<"front element is "<<d.front()<<endl;
    cout<<"back element is "<<d.back()<<endl;

    d.pop_back();
    cout<<"back element is "<<d.back()<<endl;

    d.pop_front();
    cout<<"front element is "<<d.front()<<endl;

    if(d.empty())
    {
        cout<<"queue is empty "<<endl;
    }
    else
    cout<<"queue is not empty "<<endl;

    d.pop_back();
    if(d.empty())
    {
        cout<<"queue is empty "<<endl;
    }
    else
    cout<<"queue is not empty "<<endl;

    return 0;

}
