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

void insertAtTail(node *&head, int val)
{
    // create a new node
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }

    // LL is not empty
    node *temp = head;
    while (temp != NULL)
    {

        temp = temp->next;
    }
    temp->next = n;
}

void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}

node *removeDuplicatesSorted(node *&head)
{
    node *temp = head;
    while (temp->next != NULL)
    {
        if (temp->data == temp->next->data)
        {
            node *toDelete = temp->next;
            temp->next = temp->next->next;
            delete (toDelete);
        }
        temp = temp->next;
    }
}

int main()
{

    return 0;
}

int main()
{

    return 0;
}