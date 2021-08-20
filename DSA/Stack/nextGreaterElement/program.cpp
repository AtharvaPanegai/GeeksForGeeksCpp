#include <bits/stdc++.h>
using namespace std;

void NGE(int arr[], int n)
{

    // we will traverse through the array and push the elements
    stack<int> s;
    s.push(arr[0]);

    for (int i = 1; i < n; i++)
    {
        if (s.empty())
        {
            s.push(arr[i]);
            continue;
        }
        while (s.empty() == false && arr[i] > s.top())
        {
            cout << s.top() << " --> " << arr[i] << "\n";
            s.pop();
        }
        s.push(arr[i]);
    }

    while (s.empty() == false)
    {
        cout << s.top() << "-->"
             << " -1 "
             << "\n";
        s.pop();
    }
}

int main()
{

    int arr[] = {11, 13, 21, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    NGE(arr, n);
    return 0;
}