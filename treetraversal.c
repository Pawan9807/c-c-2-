#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node* l;
    struct node* r;
};
struct node* newNode(int data)
{
    struct node* node =(struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->l =NULL;
    node->r =NULL;
  
    return (node);
}
   
void Postorder(struct node* node)
{
    if (node ==NULL)
        return;
    Postorder(node->l);
    Postorder(node->r);
    printf("%d ", node->data);
}
void Inorder(struct node* node)
{
    if (node ==NULL)
        return;
    Inorder(node->l);
    printf("%d ", node->data);
    Inorder(node->r);
}
void Preorder(struct node* node)
{
    if (node == NULL)
        return;
    printf("%d ", node->data);
    Preorder(node->l);
    Preorder(node->r);
}

int main()
{  
     struct node* root =newNode(1);
      root->l=newNode(2);
      root->l->l=newNode(4);
       root->l->r=newNode(5);
        root->l->r->l=newNode(10);
         root->l->r->r=newNode(11);

      root->l->l->l=newNode(8);
        root->l->l->r=newNode(9);
       root->r=newNode(3);
        root->r->r=newNode(7);
          root->r->l=newNode(6);
           root->r->l->l=newNode(12);
            root->r->l->r=newNode(13);

         root->r->r->r=newNode(15);
          root->r->r->l=newNode(14);

    printf("\nPreorder traversal is \n");
    Preorder(root);
  
    printf("\nInorder traversal is \n");
    Inorder(root);
  
    printf("\nPostorder traversal\n");
    Postorder(root);
     
     return 0;
}