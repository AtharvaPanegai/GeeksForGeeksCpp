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

// functions for segregating

void insertAtheadandDeleteForseparation(node *oddNode, node *&head, node *prev)
{
    // deletetion
    node *toDelete = oddNode;
    prev->next = oddNode->next->next;
    delete (toDelete);
    // insertAtHead
    oddNode->next = head;
    head = oddNode;
}

void segregationFunctionForEven(node *evenNode, node *&head, node *prev)
{
    node *toDelete = evenNode;
    prev->next = evenNode->next->next;
    delete (toDelete);

    // insert At Tail
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = evenNode;
}

void segregateEvenAndOdd(node *&head)
{
}

int main()
{

    return 0;
}