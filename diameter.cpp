#include<bits/stdc++.h>
using namespace std;
class node
{
public:
	int data;
	node * left,*right;
};
node *newnode(int data)
{
	node *temp=new node();
	temp->data=data;
	temp->left=temp->right=NULL;
	return temp;
}
int printheight(node *root)
{
	if(root==NULL)
		return 0;
	int height=max(printheight(root->left),printheight(root->right))+1;
	return height;
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif	
	node *root=newnode(1);
	root->left=newnode(2);
	root->right=newnode(3);
	root->left->left=newnode(4);
	root->left->right=newnode(5);
	root->right->left=newnode(6);
	root->right->right=newnode(7);
	int lh=printheight(root->left);
	int rh=printheight(root->right);
	cout<<"Diameter of the tree is :"<<lh+rh+1;
	return 0;
}