#include "bits/stdc++.h"
using namespace std;

int NumberofCircualarTour(queue<int> &q1, queue<int> &q2)
{
    int index = 0;
    while ((!q1.empty()) && (!q2.empty()))
    {
        if (q1.front() > q2.front())
        {   
            index++;
            return index;
            
        }
        q1.pop();
        q2.pop();

    }

    return -1;
}

int main()
{
    queue<int> q1;
    queue<int> q2;

    q1.push(4);
    q1.push(6);
    q1.push(7);
    q1.push(4);

    q2.push(6);
    q2.push(5);
    q2.push(3);
    q2.push(5);

    cout << NumberofCircualarTour(q1, q2);
    return 0;
}