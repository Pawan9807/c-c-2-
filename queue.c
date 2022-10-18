#include <stdio.h>
#define SIZE 6

void insert(int);  // insertion
void delete();     // deletion
void display();

int items[SIZE], front= -1, rear= -1;

int main() {
  delete();

  insert(12);
  insert(22); 
  insert(33);
  insert(44);
  insert(56);
  insert(43);

  insert(6);

  display();
  delete();
  display();

  return 0;
}

void insert(int value) {
  if (rear == SIZE - 1)
    printf("\nQueue is Full!!");
  else {
    if (front == -1)
      front = 0;
    rear++;
    items[rear] = value;
    printf("\nInserted -> %d", value);
  }
}

void delete() {
  if (front == -1)
    printf("\nQueue is Empty");
  else {
    printf("\nDeleted : %d", items[front]);
    front++;
    if (front > rear)
      front = rear = -1;
  }
}

void display() {
  if (rear == -1)
    printf("\nQueue is Empty!!!");
  else {
    int i;
    printf("\nQueue elements are:\n");
    for (i = front; i <= rear; i++)
      printf("%d  ", items[i]);
  }
  printf("\n");
}



/*#include <stdio.h> 
#define MAX 50
 
void insert();
void delete();
void display();
int queue_array[MAX];
int rear = - 1;
int front = - 1;
 
 int main()
 {
   insert();
   delete();
   display();
   return 0;
 }
    
    
void insert()
{
    int add_item;
    if (rear == MAX - 1)
    printf("Queue Overflow \n");
    else
    {
        if (front == - 1)
               front = 0;
        printf("Inset the element in queue : ");
        scanf("%d", &add_item);
        rear = rear + 1;
        queue_array[rear] = add_item;
    }
} 
 
void delete()
{
    if(front == - 1 || front > rear)
    {
        printf("Queue Underflow \n");
        return ;
    }
    else
    {
        printf("Element deleted from queue is : %d\n", queue_array[front]);
        front = front + 1;
    }
}
 
void display()
{
    int i;
    if (front == - 1)
        printf("Queue is empty \n");
    else
    {
         printf("Queue is : \n");
        for (i = front; i <= rear; i++)
           printf("%d ", queue_array[i]);
        printf("\n");
    }
}*/