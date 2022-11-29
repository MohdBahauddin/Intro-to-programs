#include<iostream>
#include<queue>
using namespace std;
class node
{
public:
    int data;
    node* left;
    node* right;
    node(int d)
    {
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};
node* buildtree(node* root)
{

    cout<<"enter the data"<<endl;
    int data;
    cin>>data;
    root = new node(data);
    if(data == -1)
        return NULL;

    cout<<"enter data for inserting in left of "<<data<<endl;
    root->left=buildtree(root->left);
    cout<<"enter data for inserting in right of "<<data<<endl;
    root->right=buildtree(root->right);
    return root;
}
void levelordertraversal(node* root)
{
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        node* temp=q.front();
        q.pop();

        if(temp == NULL)
        {
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}
void inorder(node* root)
{
    if(root == NULL)
        return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(node* root)
{
    if(root == NULL)
        return;

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node* root)
{
    if(root == NULL)
        return;

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
void buildfromlevelorder(node* &root)
{

    queue<node*> q;
    cout<<"enter data from root "<<endl;
    int data;
    root= new node(data);
    q.push(root);
    while(!q.empty())
    {
        node* temp=q.front();
        q.pop();
        cout<<"enter left node for '<<temp->data "<<endl;
        int leftdata;
        cin>>leftdata;

        if(leftdata != -1)
        {
            temp->left=new node(leftdata);
            q.push(temp->left);
        }
        cout<<"enter right node for "<<temp->data<<endl;

        int rightdata;
        cin>>rightdata;
        if(rightdata != -1)
        {
            temp->right = new node(rightdata);
            q.push(temp->right);
        }
    }
}
int main()
{
    node* root=NULL;
    root=buildtree(root);

    cout<<"for level order traversal "<<endl;
    levelordertraversal(root);

    cout<<"inorder traversal "<<endl;
    inorder(root);

    cout<<"preorder traversal "<<endl;
    preorder(root);

    cout<<"postorder traversal "<<endl;
    postorder(root);
    buildfromlevelorder(root);

    return 0;
}
