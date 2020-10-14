#include<bits/stdc++.h>
using namespace std;
class node 
{
public:
	int data;
	node *next;
};
void swapnodes(node **start,int a, int b)
{
	if(a==b)
		return;
	node*prevx=NULL;
	node*currx=*start;
	while(currx && currx->data!=a)
	{
		prevx=currx;
		currx=currx->next;
	}
		node*prevy=NULL;
	node*curry=*start;
		while(curry && curry->data!=b)
	{
		prevy=curry;
		curry=curry->next;
	}
	if(currx==NULL||curry==NULL)
		return;
	if(prevx!=NULL)
		prevx->next=curry;
	else 
		*start=curry;
	if(prevy!=NULL)
		prevy->next=currx;
	else
		*start=currx;
	node *temp=curry->next;
	curry->next=currx->next;
	currx->next=temp;
}
void printlist(node *start)
{
	while(start)
	{
		cout<<start->data<<"\t";
		start=start->next;
	}
}
void push(node**start, int data)
{
	node *new_node=new node();
	new_node->data=data;
	new_node->next=*start;
	*start=new_node;
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif	
	node *start=NULL;
	push(&start,7);
	push(&start,9);
	push(&start,6);
	push(&start,5);
	push(&start,4);
	push(&start,2);
	cout<<"Linked List before swap:\n";
	printlist(start);
	swapnodes(&start,4,5);
	cout<<"\nLinked List after swap:\n";
	printlist(start);
	return 0;
}