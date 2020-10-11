#include<bits/stdc++.h>
using namespace std;
                                 //Method 1
struct node
{
	int data;
	struct node* left, *right;
};
void printlevelorder(node *root)
{
	if (root==NULL) return;
	queue<node*>q;
	q.push(root);
	while(q.empty()==false)
	{
		node*nod=q.front();
		cout<<nod->data<<endl;
		q.pop();
		if(nod->left!=NULL)
			q.push(nod->left);
		if(nod->right!=NULL)
			q.push(nod->right);
	}
}
node *newnode(int data)
{
	node *temp=new node;
	temp->data=data;
	temp->left=temp->right=NULL;
	return temp;
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif	
	node * root=newnode(1);
	root->left=newnode(2);
	root->right=newnode(2);
	root->left->left=newnode(6);
	root->left->right=newnode(6);
	printlevelorder(root);
	return 0;
}