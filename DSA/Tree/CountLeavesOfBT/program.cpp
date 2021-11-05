#include "bits/stdc++.h"
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    // constructor
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int numberOfLeaves(Node *root)
{
    int noOfLeaves;
    if (root == NULL)
    {
        return 0;
    }
    if (root->right == NULL && root->left == NULL)
    {
        return 1;
    }
    else
    {
        return numberOfLeaves(root->left) + numberOfLeaves(root->right);
    }
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

    cout << numberOfLeaves(root);

    return 0;
}