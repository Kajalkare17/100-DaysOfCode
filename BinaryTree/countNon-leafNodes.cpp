#include <bits/stdc++.h> 
using namespace std; 
  
/* A binary tree node has data, pointer to  
  left child and a pointer to right child */
struct Node { 
    int data; 
    struct Node* left; 
    struct Node* right; 
}; 
  
/* Helper function that allocates a new node with the 
given data and NULL left and right pointers. */
struct Node* newNode(int data) 
{ 
    struct Node* node = new Node; 
    node->data = data; 
    node->left = node->right = NULL; 
    return (node); 
} 
  
/* Computes the number of non-leaf nodes in a tree. */
int countNonleaf(struct Node* root) 
{ 
    // Base cases. 
    if (root == NULL || (root->left == NULL &&  
                         root->right == NULL)) 
        return 0; 
  	return 1 + countNonleaf(root->left) +  
               countNonleaf(root->right); 
} 
  
/* Driver program to test size function*/
int main() 
{ 
    struct Node* root = newNode(1); 
    root->left = newNode(2); 
    root->right = newNode(3); 
    root->left->left = newNode(4); 
    root->left->right = newNode(5); 
    cout << countNonleaf(root); 
    return 0; 
} 
