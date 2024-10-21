#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *left,*right;
    Node(int value)
    {
        data=value;
        left=right=NULL;
    }
};

Node *insert(Node *root, int target)
{
    if(!root)
    {
        Node *temp=new Node(target);
        return temp;
    }
    else 
    {
        if(root->data>target)
            root->left=insert(root->left,target);
        if(root->data<target)
        root->right=insert(root->right,target);
       return root;
    }
}

void inorder(Node *root) //recursively
{
    if(!root)
    return ;
//left side
inorder(root->left);
//node
cout<<root->data<<" ";
//right side
inorder(root->right);
}
 bool search(Node *root, int target)
 {
    if(!root)
    return 0;
    if(root->data==target)
    return 1;
if(root->data>target)
return search(root->left,target);
if(root->data<target)
return search(root->right,target);
 }
int main()
{
   int arr[]={5,6,8,3,4,9,2};
  Node *root=NULL;
  for(int i=0; i<7; i++)
  {
    root=insert(root,arr[i]);
  }

  cout<<"inorder: ";
  inorder(root);
  cout<<"\nsearch result: ";
  cout<<search(root,10);
    return 0;
}