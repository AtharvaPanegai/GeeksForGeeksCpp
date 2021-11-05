#include "bits/stdc++.h"
using namespace std;

struct Node
{
    int data;
    Node *left, *right;

    // constructor
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void preOrderTraversal(Node *root)
{

    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->left = new Node(5);
    root->right->left->left = new Node(7);
    root->right->right = new Node(6);

    preOrderTraversal(root);
    return 0;
}