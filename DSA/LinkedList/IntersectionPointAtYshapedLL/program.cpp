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

int lengthofLL(node *&head)
{
    int count = 1;
    node *temp = head;
    while (temp->next != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

int intersectionPoint(node *&first, node *&second)
{
    // get a pointer at the intersection point
    int l1 = lengthofLL(first);
    int l2 = lengthofLL(second);

    node *ptr1; //bigger LL
    node *ptr2; //smaller LL

    int d = 0; // diff
    if (l1 < l2)
    {
        d = l2 - l1;
        ptr1 = second;
        ptr2 = first;
    }
    else
    {
        d = l2 - l1;
        ptr1 = first;
        ptr2 = second;
    }

    // let's put the bigger LL pointer to common  node
    while (d)
    {
        if (ptr1 == NULL)
        {
            return -1;
        }
        ptr1 = ptr1->next;
        d--;
    }

    // now both are at same point traverse and check
    while (ptr1 != NULL || ptr2 != NULL)
    {
        if (ptr1 == ptr2)
        {
            return ptr1->data;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
}

int main()
{

    return 0;
}