#include "bits/stdc++.h"
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtHead(Node *&head, int val)
{
    Node *n = new Node(val);

    n->next = head;
    head = n;
}

void insertAtTail(Node *&head, int val)
{
    Node *n = new Node(val);
    // if LL is empty
    if (head == NULL)
    {
        head = n;
        return;
    }

    // now LL is not empty
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

bool findByValue(Node *&head, int x)
{
    Node *temp = head;
    while (temp->next != NULL)
    {
        if (temp->data == x)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void display(Node *&head)
{
    Node *temp = head;
    while (temp->next != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
}

Node *reverseLL(Node *&head)
{
    Node *prevPtr = NULL;
    Node *currPtr = head;
    Node *nextPtr = head->next;

    while (currPtr != NULL)
    {
        nextPtr = currPtr->next;
        currPtr->next = prevPtr;

        prevPtr = currPtr;
        currPtr = nextPtr;
    }
    return prevPtr;
}

int main()
{
    Node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    insertAtTail(head, 7);
    insertAtTail(head, 8);

    return 0;
}