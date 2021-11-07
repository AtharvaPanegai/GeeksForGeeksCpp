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
        return 0;
    }

    return max(height(root->left), height(root->right)) + 1;
}

int DiameterOfBT(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int lh = height(root->left);
    int rh = height(root->right);

    int currDiamter = lh + rh + 1;

    int lDiameter = DiameterOfBT(root->left);
    int rDiameter = DiameterOfBT(root->right);

    return max(currDiamter, max(lDiameter, rDiameter));
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

    cout << DiameterOfBT(root);
    return 0;
}