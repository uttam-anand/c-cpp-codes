#include<bits/stdc++.h>
using namespace std;
class node
{
public:
	int data;
	node * next;
};
void push(node **head,int r_data)
{
	node *new_node=new node();
	new_node->data=r_data;
	new_node->next=(*head);
	(*head)=new_node;
}
int getcount(node *head)
{
	/*int cnt=0;//->   Iterative way of doing this
	node *curr=head;
	while(curr!=NULL)
		{
			cnt++;
			curr=curr->next;
		}
		return cnt;
		*/
	if(head==NULL)// -> Recursive way of doing this 
		return 0;
	else 
		return 1+getcount(head->next);
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif	
	node *head=NULL;
	push(&head,1);
	push(&head,2);
	push(&head,3);
	push(&head,4);
	push(&head,5);
	cout<<"count of the nodes is:-"<<getcount(head);
	return 0;
}