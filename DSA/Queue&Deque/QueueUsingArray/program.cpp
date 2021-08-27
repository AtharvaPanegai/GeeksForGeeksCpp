#include "bits/stdc++.h"
using namespace std;

#define n 100

class myQueue
{
    int *arr;
    int front;
    int back;

public:
    // constructor
    myQueue()
    {
        arr = new int[n];
        front = -1;
        back = -1;
    }

    void push(int val)
    {
        if (back == n - 1)
        {
            cout << "the Queue is Full\n";
            return;
        }
        // increment the back
        back++;
        arr[back] = val;
        if (front == -1)
        {
            front++;
        }
    }

    void pop()
    {
        if (back == -1 || front > back)
        {
            cout << "nothing to pop\n";
            return;
        }
        front++;
    }

    int peek()
    {
        if (back == -1 || front > back)
        {
            cout << "nothing to pop\n";
            return -1;
        }
        return arr[front];
    }

    bool empty()
    {
        return (back==-1 || front > back);
    }
};

int main()
{

    return 0;
}