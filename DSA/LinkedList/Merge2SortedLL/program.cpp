#include "bits/stdc++.h"
using namespace std;

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
    while (temp->next != NULL)
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

node *mergeTwoLL(node *&one, node *two)
{
    node *tempOne = one;
    node *tempTwo = two;
    node *mergedLL = new node(-1);

    node *tempThree = mergedLL;

    while (tempOne != NULL && tempTwo != NULL)
    {
        if (tempOne->data < tempTwo->data)
        {
            tempThree->next = tempOne;
            tempOne = tempOne->next;
        }
        else
        {
            tempThree->next = tempTwo;
            tempTwo = tempTwo->next;
        }
        tempThree = tempThree->next;
    }

    while (tempOne != NULL)
    {
        tempThree->next = tempOne;
        tempOne = tempOne->next;
        tempThree = tempThree->next;
    }
    while (tempTwo != NULL)
    {
        tempThree->next = tempTwo;
        tempTwo = tempTwo->next;
        tempThree = tempThree->next;
    }
    return tempThree->next;
}

void display(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main()
{
    node *headOne = NULL;
    node *headTwo = NULL;

    int arrOne[] = {1, 4, 5, 7};
    int arrTwo[] = {2, 6, 8};

    for (int i = 0; i < 4; i++)
    {
        insertAtTail(headOne, arrOne[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        insertAtTail(headTwo, arrTwo[i]);
    }

    display(headOne);
    display(headTwo);

    node *mergedLLHead = mergeTwoLL(headOne, headTwo);
    display(mergedLLHead);

    return 0;
}
