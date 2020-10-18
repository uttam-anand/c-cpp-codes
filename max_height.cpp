#include<bits/stdc++.h>
using namespace std;
class node
{
public:
	int data;
	node *left;
	node *right;
};
int max_depth(node *root)
{
	if (root==NULL)
		return 0;
	int ldepth=max_depth(root->left);
	int rdepth=max_depth(root->right);
	return 1+((ldepth>rdepth)?ldepth:rdepth);
}
node *newnode(int data)
{
	node *Node=new node();
	Node->data=data;
	Node->left=NULL;
	Node->right=NULL;
	return (Node);
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif	
	node *root=newnode(1);
	root->left=newnode(2);
	root->right=newnode(2);
	root->left->left=newnode(2);
	root->left->right=newnode(2);
	cout<<"Maximum height of the tree is:"<<max_depth(root);
	return 0;
}