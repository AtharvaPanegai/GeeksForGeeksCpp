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

node *removeEveryKNode(node *&head, int k)
{
    int count = 1;
    node *temp = head;
    while (temp->next != NULL)
    {
        // remainder 1 to get the prev node
        if (count == k)
        {
            node *toDelete = temp->next;
            temp->next = temp->next->next;
            delete (toDelete);
            count = 1;
        }
        temp = temp->next;
        count++;
    }
}

int main()
{

    return 0;
}