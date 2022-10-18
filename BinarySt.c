#include <stdio.h>
#include <stdlib.h>

struct node {
	int key;
	struct node *left, *right;
};

struct node* newNode(int item)
{
	struct node* temp
		= (struct node*)malloc(sizeof(struct node));
	temp->key = item;
	temp->left = temp->right = NULL;
	return temp;
}

void inorder(struct node* root)
{
	if (root != NULL) {
		inorder(root->left);
		printf("%d \n", root->key);
		inorder(root->right);
	}
}
void preorder(struct node* root)
{
	if (root != NULL) {
		printf("%d \n", root->key);
		inorder(root->left);
		inorder(root->right);
	}
}
void postorder(struct node* root)
{
	if (root != NULL) {
		inorder(root->left);
	    inorder(root->right);
        printf("%d \n", root->key);
	}
}
struct node* insert(struct node* node, int key)
{
		if (node == NULL)
		return newNode(key);


	if (key < node->key)
		node->left = insert(node->left, key);
	else if (key > node->key)
		node->right = insert(node->right, key);

	return node;
}
struct node* minValueNode(struct node* node)
{
    struct node* current = node;

    while (current && current->left != NULL)
        current = current->left;
  
    return current;
}
  
struct node* deleteNode(struct node* root, int key)
{
        if (root == NULL)
        return root;
  
    if (key < root->key)
        root->left = deleteNode(root->left, key);
  
       else if (key > root->key)
        root->right = deleteNode(root->right, key);
  
    else {
        if (root->left == NULL) {
            struct node* temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
            struct node* temp = root->left;
            free(root);
            return temp;
        }
  
        struct node* temp = minValueNode(root->right);
  
        root->key = temp->key;
  
        root->right = deleteNode(root->right, temp->key);
    }
    return root;
}

int main()
{
	struct node* root = NULL;
	root = insert(root, 20);
	insert(root, 8);
    insert(root, 6);
	insert(root, 18);
    insert(root, 30);
	insert(root, 25);
	insert(root, 45);

 
    printf("Inorder traversal of the given tree \n");
    inorder(root);
        printf("\n");
    	preorder(root);
        printf("\n");
        	postorder(root);
  
    printf("\nDelete 6 \n");
    root = deleteNode(root, 6);
    printf("Inorder traversal of the modified tree \n");
    inorder(root);
    printf("\n");
    	preorder(root);
        printf("\n");
        	postorder(root);
    printf("\nDelete 8\n");
    root = deleteNode(root, 8);
    printf("Inorder traversal of the modified tree \n");
    inorder(root);
    printf("\n");
    	preorder(root);
        printf("\n");
        	postorder(root);
  
    printf("\nDelete 20\n");
    root = deleteNode(root, 20);
    printf("Inorder traversal of the modified tree \n");
    inorder(root); 
    printf("\n");
    	preorder(root);
        printf("\n");
        	postorder(root);

/*	inorder(root);
	preorder(root);
	postorder(root);
*/
	return 0;
}
