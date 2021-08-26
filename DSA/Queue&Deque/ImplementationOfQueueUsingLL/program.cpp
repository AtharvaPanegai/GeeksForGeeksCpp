#include "bits/stdc++.h"
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void push(node *&head, int val)
{

    node *n = new node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = NULL;
}

void pop(node *&head)
{

    node *toDelete = head->next;
    head = head->next;
    delete (toDelete);
}

int peek(node *&head)
{
    return head->data;
}

bool empty(node *&head){
    return (head==NULL);
}

int main()
{

    return 0;
}