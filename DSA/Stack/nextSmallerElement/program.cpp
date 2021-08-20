#include "bits/stdc++.h"
using namespace std;

void printNSE(int arr[], int n)
{
    stack<int> s;
    s.push(arr[0]);

    for (int i = 1; i < n; i++)
    {
        if (s.empty())
        {
            s.push(arr[i]);
            cout << s.top() << "-->" << arr[i] << "\n";
            continue;
        }
        // while loop
        while (s.empty() == false && arr[i] < s.top())
        {
            cout << s.top() << "-->" << arr[i] << "\n";
            s.pop();
        }
        s.push(arr[i]);
    }

    while (s.empty() == false)
    {
        cout << s.top() << "-->"
             << "-1"
             << "\n";
        s.pop();
    }
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    printNSE(arr,n);

    return 0;
}