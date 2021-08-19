#include "bits/stdc++.h"
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *top = NULL;

    node(int val)
    {
        data = val;
        next = NULL;
    }

    // functions push pop empty top
    void push(int x)
    {
        // new node with given value
        node *temp = new node(x);

        if (top == NULL)
        {
            temp->next = NULL;
        }
        else
        {
            temp->next = top;
        }
        top = temp;
    }

    void pop()
    {
        if (top == NULL)
        {
            cout << "Nothing to POP";
            return;
        }
        node *temp = top;

        top = temp->next;
        delete (temp);
    }

    int top(){
        if(top==NULL){
            cout<<"Stack is Empty";
            return;
        }
        else{
            return top->data;
        }
    }

    bool empty(){
        if(top==NULL){
            return true;
        }
        return false;
    } 

};

int main()
{

    return 0;
}