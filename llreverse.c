
#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node* next;
};

void Reverse(struct Node* head)
{
	if (head==NULL)
	return;

	Reverse(head->next);
	printf("%d ", head->data);
}

void push(struct Node** head_ref, char new_data)
{
	
	struct Node* new_node =(struct Node*) malloc(sizeof(struct Node));
	
	new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}


int main()
{	
	
	struct Node* head = NULL;
    
    push(&head,4);
	push(&head, 3);
	push(&head, 2);
	push(&head, 1);

	Reverse(head);
	return 0;
}
