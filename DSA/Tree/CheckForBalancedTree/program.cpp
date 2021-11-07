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

int height(Node *root)
{
    if (root == NULL)
    {
        return -1;
    }
    int rDepth = height(root->right);
    int lDepth = height(root->left);

    if (rDepth > lDepth)
    {
        return (rDepth + 1);
    }
    else
    {
        return (lDepth + 1);
    }
}

bool CheckForBalancedTree(Node *root)
{
    if (root == NULL)
    {
        return true;
    }

    int lh = 0, rh = 0;
    lh = height(root->left);
    rh = height(root->right);

    if (abs(lh - rh) <= 1 && CheckForBalancedTree(root->left) && CheckForBalancedTree(root->right))
        return 1;
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

    cout << CheckForBalancedTree(root);

    return 0;
}