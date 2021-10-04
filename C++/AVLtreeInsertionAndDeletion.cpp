#include <bits/stdc++.h>
using namespace std;

typedef struct node
{
    int key;
    node *left;
    node *right;
    int height;
} node;
node *createNode(int key)
{
    node *newNode = (node *)malloc(sizeof(node));
    newNode->key = key;
    newNode->left = NULL;
    newNode->right = NULL;
    newNode->height = 1;
    return newNode;
}
int height(node *root)
{
    if (root == NULL)
        return 0;
    return root->height;
}
int getBalance(node *root)
{
    if (root == NULL)
        return 0;
    return height(root->left) - height(root->right);
}
node *rightRotation(node *root)
{
    node *parent = root->left;
    node *rChild = parent->right;

    parent->right = root;
    root->left = rChild;

    root->height = 1 + max(height(root->left), height(root->right));
    parent->height = 1 + max(height(parent->left), height(parent->right));

    return parent;
}

node *leftRotation(node *root)
{
    node *parent = root->right;
    node *lChild = parent->left;

    parent->left = root;
    root->right = lChild;

    root->height = 1 + max(height(root->left), height(root->right));
    parent->height = 1 + max(height(parent->left), height(parent->right));

    return parent;
}
node *insertNode(node *root, int key)
{

    if (root == NULL)
        root = createNode(key);
    else if (key < root->key)
        root->left = insertNode(root->left, key);
    else if (key > root->key)
        root->right = insertNode(root->right, key);

    root->height = 1 + max(height(root->left), height(root->right));
    int balance = getBalance(root);

    //left left ->right rotation
    if (balance > 1 && key < root->left->key)
        return rightRotation(root);

    //left right->left-right rotation
    if (balance > 1 && key > root->left->key)
    {
        root->left = leftRotation(root->left);
        return rightRotation(root);
    }

    //right right ->left rotation
    if (balance < -1 && key > root->right->key)
        return leftRotation(root);

    //right left ->right-left rotation
    if (balance < -1 && key < root->right->key)
    {
        root->right = rightRotation(root->right);
        return leftRotation(root);
    }
    return root;
}
void preOrder(node *root)
{
    if (root != NULL)
    {
        cout << root->key << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}
node *minValueNode(node *root)
{
    node *cur = root;
    while (cur && cur->left)
        cur = cur->left;
    return cur;
}
node *deleteNode(node *root, int key)
{
    //bst deletion
    if (root == NULL)
        return root;
    if (key < root->key)
        root->left = deleteNode(root->left, key);
    else if (key > root->key)
        root->right = deleteNode(root->right, key);
    else
    {
        //node found

        if (root->left == NULL || root->right == NULL)
        {
            node *child;
            child = root->left ? root->left : root->right;

            if (child == NULL) // 0 child
                root = NULL;
            else // 1 child
                *root = *child;
            delete child;
        }
        else
        { // 2 child
            //1.
            // node *successor = minValueNode(root->right);
            // root->key = successor->key;
            // root->right = deleteNode(root->right, successor->key);

            //2.
            node *parentSucc = root;
            node *successor = root->right;
            while (successor->left)
            {
                parentSucc = successor;
                successor = successor->left;
            }
            if (parentSucc != root)
            {
                parentSucc->left = successor->right;
            }
            else // root->right is a successor
                parentSucc->right = successor->right;

            root->key = successor->key;
            delete successor;
        }
    }
    //avl rotation
    if (root == NULL)
        return root;
    root->height = 1 + max(height(root->left), height(root->right));
    int balance = getBalance(root);

    if (balance > 1)
    {
        int lBalance = getBalance(root->left);
        if (lBalance >= 0) // left left case
            return rightRotation(root);
        else if (lBalance < 0) // left right case
        {
            root->left = leftRotation(root->left);
            return rightRotation(root);
        }
    }
    else if (balance < -1)
    {
        int rBalance = getBalance(root->right);
        if (rBalance <= 0) // right right case
            return leftRotation(root);
        else if (rBalance > 0) // right left case
        {
            root->right = rightRotation(root->right);
            return leftRotation(root);
        }
    }

    return root;
}
int main()
{
    node *root = NULL;
    int n, key;
    cout << "Enter Number of Nodes" << endl;
    cin >> n;
    cout << "Enter keys" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> key;
        root = insertNode(root, key);
    }

    cout << "pre order traversal of tree" << endl;

    preOrder(root);

    cout << "Enter the node to delete" << endl;
    cin >> key;
    root = deleteNode(root, key);
    cout << "\npre order traversal of tree after deleting " << key << endl;

    preOrder(root);
    return 0;
}

/*
avl tree ->self balancing BST
balance factor=height of left subtree-height of right subtree
always -1<=balance<=1

h=height of tree . equals to (log n) always for avl tree
n=number of nodes in a tree(in case of skewed binary tree)
TC:
    insertion: 
        avg case:O(log n) 
    
    deletion:
        1. recursive: 
            avg: O(h)
            worst:O(n)
        2. track parent of successor
*/