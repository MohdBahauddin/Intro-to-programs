#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int> q;

    q.push(5);
    q.push(10);
    q.push(15);

    cout<<"size of queue is "<<q.size()<<endl;
    cout<<"front of queue is "<<q.front()<<endl;

    q.pop();
    cout<<"size of queue "<<q.size()<<endl;

    q.pop();
    q.pop();
    if(q.empty()){
        cout<<"queue is empty "<<endl;
    }
    else
        cout<<"queue in not empty "<<endl;

    return 0;
}

