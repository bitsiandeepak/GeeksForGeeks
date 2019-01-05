#include <iostream>
using namespace std;

struct Node
{
	int data;
	struct Node *next;
};

void push(struct Node** head_ref, int new_data) 
{ 
    /* allocate node */
    struct Node* new_node = 
            (struct Node*) malloc(sizeof(struct Node)); 
  
    /* put in the data  */
    new_node->data  = new_data; 
  
    /* link the old list off the new node */
    new_node->next = (*head_ref); 
  
    /* move the head to point to the new node */
    (*head_ref)    = new_node; 
}

int Length(Node *head)
{
	if(head == NULL)
		return 0;
	else
		return 1 + Length(head->next);
}

int main() {
	// your code goes here
	struct Node* head = NULL; 
  
    /* Use push() to construct below list 
     1->2->1->3->1  */
    push(&head, 1); 
    push(&head, 3); 
    push(&head, 1); 
    push(&head, 2); 
    push(&head, 1); 
  
    /* Check the count function */
    printf("count of nodes is %d", Length(head)); 
    return 0; 
	return 0;
}
