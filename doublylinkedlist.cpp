#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;
    node* prev;

    node(int d)
    {
        this->data=d;
        this->next=NULL;
        this->prev=NULL;
    }
    ~node()
    {

        int val=this->data;
        if(next != NULL){
            delete next;
        next=NULL;
        }
        cout<<"memory free for node with data "<<val<<endl;
    }
};
void insertathead(node* &head,int d)
{
    if(head==NULL)
    {
        node* temp=new node(d);
        head=temp;
    }
    else{
    node* temp=new node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
}
}
void insertattail(node* &tail,int d)
{
    if(tail==NULL)
    {
        node* temp=new node(d);
        tail=temp;
    }
    else{
            node* temp=new node(d);
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
    }
}
void insertatposition(node* &head,node* &tail,int position,int d)
{
    //insert at start
    if(position == 1)
    {
        insertathead(head,d);
        return;
    }
    node* temp=head;
    int cnt=1;
    while(cnt < position-1)
    {
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL)
    {
        insertattail(tail,d);
        return;
    }
    node* nodetoinsert=new node(d);

    nodetoinsert->next=temp->next;
    temp->next->prev=nodetoinsert;
    temp->next=nodetoinsert;
    nodetoinsert->prev=temp;
}
void deletenode(int position,node*head)
{
    if(position == 1)
    {
        node* temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }

    else
    {
        node* curr=head;
        node* prev=NULL;

        int cnt=1;
        while(cnt <= position -1)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;

        delete curr;
    }
}
void print(node* &head)
{
    node* temp=head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int getlength(node* &head)
{
    int len=0;
    node* temp=head;
    while(temp != NULL)
    {
        len++;
        temp=temp->next;
    }
    return len;
}
int main()
{
    node* node1=new node(10);
    node* head=node1;
    node* tail=node1;
    cout<<getlength(head)<<endl;
    print(head);

    insertathead(head,15);
    print(head);

    insertathead(head,18);
    print(head);

    insertathead(head,26);
    print(head);

    insertattail(tail,50);
    print(head);

    insertatposition(head,tail,3,12);
    print(head);

    deletenode(3,head);
    print(head);

    return 0;
}
