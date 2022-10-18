#include<stdio.h>
#include<stdlib.h>

struct node
{
 int key;
 int count;
 struct node *left, *right;
};
struct node *newNode(int item)
{
 struct node *temp = (struct node *)malloc(sizeof(struct node));
 temp->key = item;
 temp->left = temp->right = NULL;
 temp->count = 1;
 return temp;
}
void inorder(struct node *root)
{
 if (root != NULL)
 {
  inorder(root->left);
  printf("%d(%d) ", root->key, root->count);
  inorder(root->right);
 }
}
struct node* insert(struct node* node, int key)
{
 if (node == NULL) return newNode(key);

 if (key == node->key)
 {
 (node->count)++;
  return node;
 }
 if (key < node->key)
  node->left = insert(node->left, key);
 else
  node->right = insert(node->right, key);
 return node;
}

struct node * minValueNode(struct node* node)
{
 struct node* current = node;

 while (current->left != NULL)
  current = current->left;

 return current;
}

struct node* deleteNode(struct node* root, int key)
{
  if (root == NULL) return root;

 if (key < root->key)
  root->left = deleteNode(root->left, key);

 else if (key > root->key)
  root->right = deleteNode(root->right, key);
 else
 {
  if (root->count > 1)
  {
  (root->count)--;
  return root;
  }
  if (root->left == NULL)
  {
   struct node *temp = root->right;
   free(root);
   return temp;
  }
  else if (root->right == NULL)
  {
   struct node *temp = root->left;
   free(root);
   return temp;
  }
  struct node* temp = minValueNode(root->right);


  root->key = temp->key;
  root->count = temp->count;
  root->right = deleteNode(root->right, temp->key);
 }
 return root;
}

int main()
{
 /* Let us create following BST
   12(3)
  /  \
 10(2)  20(1)
 / \
 9(1) 11(1) */
 struct node *root = NULL;
 root = insert(root, 12);
 root = insert(root, 10);
 root = insert(root, 20);
 root = insert(root, 9);
 root = insert(root, 11);
 root = insert(root, 10);
 root = insert(root, 12);
 root = insert(root, 12);

 printf("Inorder traversal of the given tree \n");
 inorder(root);

 printf("\nDelete 20\n");
 root = deleteNode(root, 20);
 printf("Inorder traversal of the modified tree \n");
 inorder(root);

 printf("\nDelete 12\n");
 root = deleteNode(root, 12);
 printf("Inorder traversal of the modified tree \n");
 inorder(root);

 printf("\nDelete 9\n");
 root = deleteNode(root, 9);
 printf("Inorder traversal of the modified tree \n");
 inorder(root);

 return 0;
}
