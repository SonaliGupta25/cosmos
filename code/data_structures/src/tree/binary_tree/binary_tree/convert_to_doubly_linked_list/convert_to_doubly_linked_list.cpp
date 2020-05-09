/* Structure for tree and linked list
 *
 * struct Node
 * {
 *  int data;
 *  Node *left, *right;
 * };
 *
 */

// root --> Root of Binary Tree
// head_ref --> Pointer to head node of created doubly linked list

template<typename Node>
void BToDLL(Node *root, Node **head_ref)
{
    //firstly checking the base condition 
    if (!root)
        return;
// recursive call to the function now proving right child as one of the parameter
    BToDLL(root->right, head_ref);
    root->right = *head_ref;
// checking if there is a head reference node 
    if (*head_ref)
        (*head_ref)->left = root;
    *head_ref = root;
//recursive call to the function now with the left child of root node
    BToDLL(root->left, head_ref);
}
