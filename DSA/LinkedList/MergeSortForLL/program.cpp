#include "bits/stdc++.h"
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        int data = val;
        next = NULL;
    }
};

node *mergeSorting(node *&head)
{
    node *curr = head;
    node *first;
    node *second;

    if (curr == NULL || curr->next == NULL)
    {
        return;
    }

    FindMiddleElement(curr, first, second);
    mergeSorting(first);
    mergeSorting(second);

    return mergeBoth(first, second);
}

void FindMiddleElement(node *&head, node *&first, node *&second)
{
    node *slow = head;
    node *fast = head;
    while (fast != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    // now break the LL
    first = head;
    second = slow->next;
    slow->next = NULL;
}

node *mergeBoth(node *&first, node *&second)
{
    node *p1 = first;
    node *p2 = second;
    node *p3;
    node *dummyNode = new node(-1);
    p3 = dummyNode;

    while (p1 != NULL && p2 != NULL)
    {
        if (p1->data < p2->data)
        {
            p3->next = p1;
            p1 = p1->next;
        }
        else
        {
            p3->next = p2;
            p2 = p2->next;
        }
        p3 = p3->next;
    }

    while (p1 != NULL)
    {
        p3->next = p1;
        p1 = p1->next;
        p3 = p3->next;
    }

    while (p2 != NULL)
    {
        p3->next = p2;
        p2 = p2->next;
        p3 = p3->next;
    }

    return p3->next;
}

int main()
{

    

    return 0;
}