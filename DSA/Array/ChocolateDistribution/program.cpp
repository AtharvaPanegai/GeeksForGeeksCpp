#include "bits/stdc++.h"
using namespace std;

int findMinDiff(int arr[], int n, int m)
{
    if (m == 0 || n == 0)
    {
        return 0;
    }
    if (m > n)
    {
        return -1;
    }

    sort(arr, arr + n);
    int minDiff = INT_MAX;

    for (int i = 0; (i + m - 1) < n; i++)
    {
        int diff = arr[i + m - 1] - arr[i];
        if (diff < minDiff)
        {
            minDiff = diff;
        }
    }

    return minDiff;
}

int main()
{
    int arr[] = {3, 4, 1, 9, 56, 7, 9, 12};
    int n = 8;
    int m = 5;
    cout << findMinDiff(arr, n, m);

    return 0;
}