#include "bits/stdc++.h"
using namespace std;

class twoStack
{
    int *arr;
    int size;
    int top1;
    int top2;

public:
    // constructor
    twoStack(int n)
    {
        size = n;
        top1 = -1;
        top2 = size;
    }

    // push in stack 1
    void push1(int x)
    {
        if (top1 < top2 - 1)
        {
            top1++;
            arr[top1] = x;
        }
        else
        {
            cout << "stack is full\n";
            exit(1);
        }
    }

    void push2(int x)
    {
        if (top1 < top2 - 1)
        {
            top2--;
            arr[top2] = x;
        }
        else
        {
            cout << "stack is full\n";
            exit(1);
        }
    }

    void pop1()
    {
        if (top1 >= 0)
        {
            top1--;
        }
        else
        {
            cout << "Stack is underflow\n";
            exit(1);
        }
    }

    void pop2()
    {
        if (top2 < size)
        {
            top2++;
        }
        else
        {
            cout << "Stack is underflow\n";
            exit(1);
        }
    }
};

int main()
{

    return 0;
}