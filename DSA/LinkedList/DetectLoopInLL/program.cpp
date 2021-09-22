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

bool detectLoop(node *&head)
{
    node *one = head;
    node *two = head;
    while (one != NULL)
    {
        if (one == two)
        {
            return true;
        }
        one = one->next;
        two = two->next->next;
    }

    return false;
}
int main()
{

    return 0;
}