#include<iostream>
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
node * binarytree()
{
  int x;
  cin>>x;
  if(x==-1)
  {
    return 0 ;
  }
  node *temp=new node(x);
  cout<<"enter left child of "<<x<<": ";
  temp->left=binarytree();
   cout<<"enter right child of "<<x<<": ";
  temp->right=binarytree();
  return temp;
}
void preorder(node *root)
{
  if(root==NULL)
  return ;
cout<<root->data<<" ";  //N
preorder(root->left);  //L
preorder(root->right);  //R
}
void inorder(node *root)
{
  if(root==NULL)
  return ;

inorder(root->left);  // L
cout<<root->data<<" "; // N
inorder(root->right);  //R
}
void postorder(node *root)
{
  if(root==NULL)
  return ;

inorder(root->left);  // L
inorder(root->right);  //R
cout<<root->data<<" "; // N
}
int main()
{
 cout<<"enter root node: ";
 node *root;
 root=binarytree();
 cout<<"preorder: ";
 preorder(root);
 cout<<"\ninorder: ";
inorder(root);
cout<<"\npostorder: ";
postorder(root);
    return 0;
}