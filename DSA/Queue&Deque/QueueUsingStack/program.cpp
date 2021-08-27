#include "bits/stdc++.h"
using namespace std;

class myQueue
{
public:
    stack<int> s1;
    stack<int> s2;

    void push(int val)
    {
        s1.push(val);
        return;
    }

    int pop()
    {
        if (s1.empty() && s2.empty())
        {
            cout << "Queue is Empty\n";
            return;
        }
        if (s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }

        int topVal = s2.top();
        s2.pop();
        return topVal;
    }

    bool empty()
    {
        return (s1.empty() && s2.empty());
    }
};

int main()
{

    return 0;
}