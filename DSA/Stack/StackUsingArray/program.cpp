#include "bits/stdc++.h"
using namespace std;

#define n 100

class Stack
{
    int *arr;
    int top;

public:
    // constructor
    Stack()
    {
        arr = new int[n];
        top = -1;
    }

    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "The stack is Full";
            return;
        }
        else
        {
            top++;
            arr[top] = x;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "stack is Empty";
            return;
        }
        else
        {
            top--;
        }
    }

    int top()
    {
        return arr[top];
    }

    bool empty()
    {
        if (top == -1)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    

    return 0;
}