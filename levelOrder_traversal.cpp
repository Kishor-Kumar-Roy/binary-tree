#include<iostream>
#include<queue>
#include<vector>
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
vector<int> levelOrder(node*root)
{
queue<node *>q;
q.push(root);
vector<int>ans;
node *temp;
while(!q.empty())
{
    temp=q.front();
    q.pop();
    ans.push_back(temp->data);
    if(temp->left)
    {
        q.push(temp->left);
    }
     if(temp->right)
    {
        q.push(temp->right);
    }

}
return ans;
}
int main()
{
 cout<<"enter root node: ";
 node *root;
 root=binarytree();
 cout<<"level Order traversal: ";
 vector<int>traversal=levelOrder(root);
 for(int i=0;i<traversal.size();i++)
 {
    cout<<traversal[i]<<" ";
 }
 return 0;
}