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

int childrenSumProp(Node *root)
{
    int leftData = 0, rightData = 0;
    if (root == NULL || (root->left == NULL && root->right == NULL))
    {
        return 1;
    }

    if (root->left != NULL)
    {
        leftData = root->left->data;
    }
    if (root->right != NULL)
    {
        rightData = root->right->data;
    }

    if ((root->data == leftData + rightData) && (childrenSumProp(root->left) && childrenSumProp(root->right)))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    struct Node *root = new Node(10);
    root->left = new Node(3);
    root->right = new Node(7);

    cout << childrenSumProp(root);

    return 0;
}