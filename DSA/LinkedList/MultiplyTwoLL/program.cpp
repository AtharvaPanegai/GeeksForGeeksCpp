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

node *multiplyLoop(node *&one, node *&two)
{
    node *p1 = one;
    node *p2 = two;
    node *multiPliedLL = new node(-1);
    node *p3 = multiPliedLL;
    while (p1 != NULL && p2 != NULL)
    {
        p3->next = new node(p1->data * p2->data);
        p1 = p1->next;
        p2 = p2->next;
        p3 = p3->next;
    }

    return p3->next;
}

void display(node *&head)
{
    node *temp = head;
    while (temp->next != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
}

int main()
{
    node *one = NULL;
    node *two = NULL;
    insertAtTail(one, 11);
    insertAtTail(one, 12);
    insertAtTail(one, 13);
    insertAtTail(two, 11);
    insertAtTail(two, 12);
    insertAtTail(two, 13);

    node *newNode = multiplyLoop(one, two);
    display(newNode);

    return 0;
}