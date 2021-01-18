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
	node *left,*right;	
}n;
n* newNode(int data)
{
	n*temp= new n();
	temp->data=data;
	temp->left=temp->right=NULL;
	return temp;
}
int level(n * root,int k,int lev)
{
	if(root==NULL)
		return -1;
	if(root->data==k)
		return lev;

	int left=level(root->left,k,lev+1);

	return (left!=-1)?left: level(root->right,k,lev+1);
}
n * Dist( n* root, int n1, int n2 , int & dn1, int & dn2, int & dist, int lev)
{
	if(root==NULL) return NULL;

	if(root->data == n1)
	{
		dn1=lev;
		return root;
	}
	if(root->data == n2)
	{
		dn2=lev;
		return root;
	}
	n * left_lca=Dist(root->left, n1,n2, dn1,dn2,dist, lev+1);
	n * right_lca=Dist(root->right, n1,n2, dn1,dn2,dist, lev+1);

	if(left_lca && right_lca)
	{
		dist= dn1 + dn2 - 2*lev;
		return root;
	}
	return (left_lca!=NULL)? left_lca: right_lca;
}
int findDistance( n*root, int n1, int n2)
{
	int dn1=-1,dn2=-1;
	int dist;
	n *lca= Dist(root,n1,n2,dn1,dn2,dist,1);
	if(dn1!=-1 && dn2!=-1);
		return dist;
	if(dn1!=-1)
	{
		dist=level(lca,n2,0);
		return dist;
	}
	if(dn2!=-1)
	{
		dist=level(lca,n1,0);
		return dist;
	}
	return -1;
}
int main()
{
	IO();	
	n * root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	root->right->left = newNode(6);
	root->right->right = newNode(7);
	root->right->left->right = newNode(8);
	cout << "Dist(4, 5) = " << findDistance(root, 4, 5);
	cout << "\nDist(4, 6) = " << findDistance(root, 4, 6);
	cout << "\nDist(3, 4) = " << findDistance(root, 3, 4);
	cout << "\nDist(2, 4) = " << findDistance(root, 2, 4);
	cout << "\nDist(8, 5) = " << findDistance(root, 8, 5);
	return 0;
}