#include<iostream>
#include<queue>
using namespace std;
class node
{
    public:
  int data;
  node *left, *right;
  node(int value)
  {
    data=value;
    left=right=NULL;
  }
};
int main()
{
int x,first ,second;
cout<<"enter the root of tree: ";
cin>>x;
queue<node*>q;
node *root=new node(x);
q.push(root);
//build the binary tree
while(!q.empty())
{
    node *temp=q.front();
    q.pop();
    cout<<"enter the left child of "<<temp->data<<": ";
    cin>>first;
    if(first!=-1)
    {
        temp->left=new node(first);
        q.push(temp->left);

    }
      cout<<"enter the right child of "<<temp->data<<": ";
    cin>>second;
    if(second!=-1)
    {
        temp->right=new node(second);
        q.push(temp->right);
    }
}
    return 0;
}