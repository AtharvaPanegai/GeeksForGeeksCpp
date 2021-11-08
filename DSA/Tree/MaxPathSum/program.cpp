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

int maxPathSum(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int sum = 0;

    sum += root->data;

    sum += max(maxPathSum(root->left), maxPathSum(root->right));

    return sum;
}

int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(12);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(-6);

    cout << maxPathSum(root);

    return 0;
}