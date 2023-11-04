#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int data;
  struct node *left;
  struct node *right;
} Node;

Node *new_node(int data) {
  Node *new_node = (Node *)malloc(sizeof(Node));
  if (new_node == NULL) {
    printf("Error: Could not allocate memory for new node.\n");
    exit(1);
  }
  new_node->data = data;
  new_node->left = NULL;
  new_node->right = NULL;
  return new_node;
}

Node *insert_node(Node *root, int data) {
  if (root == NULL) {
    return new_node(data);
  } else if (data < root->data) {
    root->left = insert_node(root->left, data);
  } else if (data > root->data) {
    root->right = insert_node(root->right, data);
  } else {
    return root;
  }
  return root;
}

Node *search_node(Node *root, int data) {
  if (root == NULL) {
    return NULL;
  } else if (data < root->data) {
    return search_node(root->left, data);
  } else if (data > root->data) {
    return search_node(root->right, data);
  } else {
    return root;
  }
}

void print_inorder(Node *root) {
  if (root == NULL) {
    return;
  }
  print_inorder(root->left);
  printf("%d ", root->data);
  print_inorder(root->right);
}

int main() {
  Node *root = NULL;
  root = insert_node(root, 10);
  root = insert_node(root, 5);
  root = insert_node(root, 15);
  root = insert_node(root, 3);
  root = insert_node(root, 7);
  root = insert_node(root, 17);
  int a;
  printf("Enter the node to be searched: ");
  scanf("%d", &a);
  Node *node = search_node(root, a);
  if (node != NULL) {
    printf("The node with the value %d is FOUND in the binary search tree.\n", a);
  } else {
    printf("The node with the value %d is NOT FOUND in the binary search tree.\n", a);
  }
  
  printf("The inorder traversal of the binary search tree is: \n");
  print_inorder(root);
  return 0;
}