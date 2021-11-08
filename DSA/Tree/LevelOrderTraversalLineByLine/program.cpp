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

vector<vector<int>> levelOrder(Node* node)
{
   queue<Node*> q;
  vector<vector<int>> ans;
  Node* curr;
  q.push(node);
  while(!q.empty()){
      int size=q.size();
      vector<int> vec;
      while(size--){
          curr=q.front();
          q.pop();
          vec.push_back(curr->data);
          if(curr->left) q.push(curr->left);
          if(curr->right) q.push(curr->right);
      }
      ans.push_back(vec);
  }
  return ans;
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
    levelOrder(root);

    return 0;
}