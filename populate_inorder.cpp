 void populateNext(node *root) 
{ 
	node *next = NULL; 

	populateNextRecur(root, &next); 
} 

void populateNextRecur(node* p, node **next_ref) 
{ 
	if (p) 
	{ 
		
		populateNextRecur(p->right, next_ref); 


		p->next = *next_ref; 


		*next_ref = p; 
 
		populateNextRecur(p->left, next_ref); 
	} 
}
