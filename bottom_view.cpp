#include<bits/stdc++.h>
using namespace std;
struct Node 
{
	Node *left;
	Node *right;
	int hd;
	int data;
};
Node  *newnode (int key)
{
	Node *node= new Node();
	node->left = node->right=NULL;
	node ->data= key;
	return node;
}
void topview(Node*root)
{
	if(root==NULL)
		return;
	queue<Node*>q;
	map<int ,int>m;
	int hd=0;
	root->hd=hd;
	q.push(root);
	while(q.size())
	{
		hd=root->hd;
		m[hd]=root->data;
		if(root->left)
		{
			root->left->hd=hd-1;
			q.push(root->left);
		}
		if(root->right)
		{
			root->right->hd=hd+1;
			q.push(root->right);
		}
		q.pop();
		root=q.front();
	}
	for(auto i=m.begin();i!=m.end();i++)
	{
		cout<<i->second<<" ";
	}
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	Node *root=newnode(1);
	root->left= newnode(2);
	root->right=newnode(3);
	root->left->right=newnode(4);
	root->left->right->right=newnode(5);
	root->left->right->right->right=newnode(6);
	topview(root);
	return 0;
}