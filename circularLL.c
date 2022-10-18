/* #include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

void llTraversal(struct Node *head)
{
    struct Node *ptr = head;
    do
    {
        printf("Element is %d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}

int main()
{

    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 4;
    head->next = second;

    second->data = 3;
    second->next = third;

    third->data = 6;
    third->next = fourth;

    fourth->data = 1;
    fourth->next = head;

    llTraversal(head);

    return 0;
} */

// OR
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

int main()
{  
    int count;
   
    struct Node *head = NULL;
    struct Node *first = NULL;
    struct Node *second = NULL;
    struct Node *tail = NULL;
    struct Node *ptr = NULL;

    ptr = (struct Node *)malloc(sizeof(struct Node));
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    tail = (struct Node *)malloc(sizeof(struct Node));
    head=(struct Node*)malloc(sizeof(struct Node));

head->data=1;
head->next =first;

first->data=2;
first->next=second;

second->data=3;
second->next=tail;

tail->data=4;
tail->next=head;

head->prev=tail;
first->prev=head;
second->prev=first;
tail->prev=second;

ptr=head;

do
{
    printf("%d \n",ptr->data);
    ptr=ptr->next;

}while(ptr!=head);

// another condition
/*while(ptr!=head)
{
    count++;
    printf("%d",ptr->data);
    ptr=ptr->next;
}
*/

return 0;
}