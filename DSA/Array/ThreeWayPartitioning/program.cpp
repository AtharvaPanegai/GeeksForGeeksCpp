#include "bits/stdc++.h"
using namespace std;

void threeWayPartitioning(int arr[], int n, int l, int r)
{
    int start = 0, end = n - 1;
    for (int i = 0; i <= end;)
    {
        if (arr[i] < l)
        {
            swap(arr[i++], arr[start++]);
        }
        else if (arr[i] > r)
        {
            swap(arr[i], arr[end--]);
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    int arr[] = {1, 14, 5, 20, 4, 2, 54, 20, 87,
                 98, 3, 1, 32};
    int n = sizeof(arr) / sizeof(arr[0]);

    threeWayPartitioning(arr, n, 10, 20);

    cout << "Modified array \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}