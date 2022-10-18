#include <stdio.h>
#include <stdlib.h>
// basically it is append/join two linked list
struct Node
{
    int data;
    struct Node *next;
} *temp = NULL, *first = NULL, *second = NULL;

struct Node* Create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    temp = (struct Node *) malloc(sizeof(struct Node));
    temp->data = A[0];
    temp->next = NULL;
    last = temp;

    for (i = 1; i < n; i++)
    {
        t = (struct Node *) malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
    return temp;
}

void show(struct Node *p)
{
    while (p != NULL)
    {
        printf ("%d ", p->data);
        p = p->next;
    }
}


void Concat(struct Node *first, struct Node *second)
{
    struct Node *p = first;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = second;
    second = NULL;
}

int main()
{
    int A[] = { 1,2,3,4 };
    int B[] = { 5,6,7,8 };
    first = Create(A, 4);
    second = Create(B, 4);

    printf("1st Linked List: ");
    show(first);

    printf("\n2nd Linked List: ");
    show(second);

    Concat(first, second);

    printf("\n\nConcantenated Linked List: \n");
    show(first);
    return 0;
}