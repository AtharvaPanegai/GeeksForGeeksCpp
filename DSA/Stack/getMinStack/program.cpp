#include "bits/stdc++.h"
using namespace std;

struct myStack
{
    stack<int> s;
    int minEle;

    void getMin()
    {
        if (s.empty())
        {
            cout << "Stack is Empty";
            return;
        }
        else
        {
            cout << minEle << "\n";
            return;
        }
    }

    void push(int x)
    {
        if (s.empty())
        {
            minEle = x;
            s.push(x);
            cout << "Number inserted is : " << x << "\n";
            return;
        }
        else
        {
            if (x < minEle)
            {
                s.push(2 * x - minEle);
                minEle = x;
            }
            else
            {
                s.push(x);
            }
            cout << "Number inserted is : " << x << "\n";
        }
    }

    void pop()
    {
        if (s.empty())
        {
            cout << "Stack is Empty"
                 << "\n";
            return;
        }
        int t = s.top();
        s.pop();

        if (t < minEle)
        {
            cout << "The number popped : " << minEle << "\n";
            minEle = 2 * minEle - t;
        }
        else
        {
            cout << "The Number popped : " << t << "\n";
            return;
        }
    }

    // this function gives us the top of stack
    void peek()
    {

        if (s.empty())
        {
            cout << "Stack is Empty\n";
            return;
        }
        int t = s.top();
        if (t < minEle)
        {
            cout << "The top Element is : " << minEle << "\n";
        }
        else
        {
            cout << t << "\n";
        }
    }
};

int main()
{
    myStack s;
    s.push(1);
    s.push(34);
    s.getMin();
    s.push(0);
    s.push(-34);
    s.push(123);
    s.push(5);
    s.getMin();

    return 0;
}