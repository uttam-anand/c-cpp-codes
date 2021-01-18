#include<bits/stdc++.h>
using namespace std;
void IO()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}

typedef struct node
{
	int data;
	node * left=NULL,*right=NULL;
}n;

bool ifpresent(n* root,int data)
{
	if(root==NULL)
		return false;
	if(data==root->data)
		return true;
	if(data > root->data)
		return ifpresent(root->right,data);
	
	return ifpresent(root->left,data);
}

n * newnode(int data)
{
	n* temp= new n();
	temp->data=data;
	return temp;
}

int main()
{
	IO();
	n * root= newnode(6);
	root->left=newnode(4);
	root->right=newnode(8);
	root->left->left=newnode(3);
	root->left->right=newnode(5);
	root->right->left=newnode(7);
	root->right->right=newnode(10);
	
	/*if(ifpresent(root,7))
		cout<<"Yes";
	else
		cout<<"No";
	*/

	n * curr=root;
	while(curr->right)
		curr=curr->right;
	cout<<"Max:"<<curr->data<<endl;
	curr=root;
	while(curr->left)
		curr=curr->left;
	cout<<"Min:"<<curr->data;
	return 0;
}