#include<stdio.h>
#include<stdlib.h>

struct  node
{
	int data;
	struct node *left,*right;

};
struct node*newnode(int data)
{
	struct node*node=(struct node*)malloc(sizeof(struct node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	return (node);
}
int max(int a,int b)
{
	return (a>b)?a:b;
}
int diameter(struct node*root,int *height)
{
	int lh=0,rh=0;
	int ld=0,rd=0;
	if(root==NULL)
	{
		*height=0;
		return 0;
	}
	ld=diameter(root->left,&lh);
	rd=diameter(root->right,&rh);
	*height=max(lh,rh)+1;
	return max(lh+rh+1,max(ld,rd));
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif	
	int height=0;
	struct node*root=newnode(2);
	root->left=newnode(5);
	root->right=newnode(4);
	root->left->left=newnode(6);
	root->left->right=newnode(8);

	printf("Diameter of the tree is:%d\n",diameter(root,&height));
	return 0;
}