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

int search(int inOrder[], int curr, int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        if (inOrder[i] == curr)
        {
            return i;
        }
    }
    return -1;
}

Node *buildTree(int inOrder[], int postOrder[], int start, int end)
{
    static int idx = 4;
    if (start > end)
    {
        return NULL;
    }
    int curr = postOrder[idx];
    idx--;
    Node *root = new Node(curr);
    int pos = search(inOrder, curr, start, end);
    if (start == end)
    {
        return root;
    }
    root->left = buildTree(inOrder, postOrder, start, pos - 1);
    root->right = buildTree(inOrder, postOrder, pos + 1, end);

    return root;
}

void printPostOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    printPostOrder(root->left);
    printPostOrder(root->right);
    cout << root->data << " ";
}

int main()
{
    int postOrder[] = {4, 2, 5, 3, 1};
    int inOrder[] = {4, 2, 1, 5, 3};

    struct Node *root = buildTree(inOrder, postOrder, 0, 4);
    printPostOrder(root);
    return 0;
}