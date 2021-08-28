#include "bits/stdc++.h"
using namespace std;

void reverseQueue(queue<int> &q1)
{
    stack<int> s1;
    // empty queue and put into stack
    while (!q1.empty())
    {
        s1.push(q1.front());
        q1.pop();
    }

    while (!s1.empty())
    {
        q1.push(s1.top());
        s1.pop();
    }


}
int main()
{
    queue<int> q;

    q.push(10);
    q.push(11);
    q.push(12);
    q.push(13);

    reverseQueue(q);

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }

    return 0;
}