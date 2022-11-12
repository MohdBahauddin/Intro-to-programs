#include<iostream>
using namespace std;

class node {

public:

    int data;
    node* next;

    node(int value)
    {
        this->data=value;
        this->next=NULL;
    }
    //destructor
    ~node()
    {
        int value = this->data;

        //memmory free
        if(this->next != NULL )
        {
            delete next;
            this->next = NULL;

        }
        cout<<"memmory is free for node with data "<<value <<endl;
    }
};
void insertathead( node* &head,int d)
{
    node* temp=new node(d);
    temp->next=head;
    head=temp;
}
void insertattail(node* &tail,int d)
{
    node* temp=new node(d);
    tail->next=temp;
    tail=temp;
}
void print(node* &head)
{
    node* temp=head;
    while(temp != NULL)
    {
        cout<<temp->data <<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertatposition(node* &tail,node* &head,int position,int d)
{
    if(position == 1)
    {
        insertathead(head,d);
        return;
    }
    node* temp=head;
    int cnt=1;
    while(cnt <= position-1)
    {
        temp=temp->next;
        cnt++;
    }
    if(temp->next == NULL)
    {
        insertattail(tail,d);
        return;
    }
    node* nodetoinsert=new node(d);
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;
}
void deletenode(int position,node* &head)
{
    //deleting first or start node

    if(position == 1)
    {
        node* temp=head;
        head = head->next;
        //memmory free node
        temp->next = NULL;
        delete temp;
    }
    else{
        //deleting any middle node or last
        node* curr=head;
        node* prev =NULL;

        int cnt=1;
        while(cnt<position)
        {
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}
int main()
{
    node* node1=new node(10);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;

    node* head=node1;
    node* tail=node1;
    print(head);

    insertathead(head,12);
    print(head);

    insertattail(tail,23);
    print(head);

    insertatposition(tail,head,2,50);
    print(head);

    deletenode(2,head);
    print(head);

}
