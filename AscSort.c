#include <stdio.h>
#include <stdlib.h>
 
struct Node
{
    int data;
    struct Node* next;
};
 
void printList(struct Node* head)
{
    struct Node* ptr = head;
    while (ptr)
    {
        printf("%d —> ", ptr->data);
        ptr = ptr->next;
    }
 
    printf("NULL");
}
void push(struct Node** head, int data)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}
 
void sortedInsert(struct Node** head, struct Node* newNode)
{
    struct Node k;          //k indicate dummy
    struct Node* current = &k;
    k.next = *head;
 
    while (current->next!= NULL && current->next->data < newNode->data) 
    {
        current= current->next;
    }
 
    newNode->next= current->next;
    current->next= newNode;
    *head = k.next;
}
 
void insertSort(struct Node** head)
{
    struct Node* result= NULL;     
    struct Node* current= *head;   
    struct Node* next;
 
    while (current!= NULL)
    {
        next= current->next;
        sortedInsert(&result, current);
        current= next;
    }
 
    *head= result;
}
 
int main(void)
{

    int keys[]={6, 3, 4, 8, 2, 9};
    int n= sizeof(keys)/sizeof(keys[0]);
 
    struct Node* head = NULL;
    for(int i = n-1; i >= 0; i--) 
    {
        push(&head, keys[i]);
    }
 
     insertSort(&head);
     printList(head);
 
    return 0;
}