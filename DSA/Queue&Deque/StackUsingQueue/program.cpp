#include "bits/stdc++.h"
using namespace std;

class myStack
{
    int N; // size of the stack
    queue<int> q1;
    queue<int> q2;

public:
    void push(int val)
    {
        q2.push(val);
        N++;
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        // now reverse the queues
        queue<int> temp = q1;
        q1 = q2;
        q2 = q1;
    }

    bool empty(){
        return (N==0);
    }

    int size(){
        return N;
    }

    int top(){
        return q1.front();
    }
    void pop(){
        q1.pop();
        N--;
    }

};

int main()
{

    return 0;
}