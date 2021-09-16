#include "bits/stdc++.h"
using namespace std;

void LeadersInArray(int arr[], int n)
{
    int max = arr[n - 1];
    cout << max << " ";
    for (int i = n - 2; i >= 1; i--)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            cout << max << " ";
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    LeadersInArray(arr, n);

    return 0;
}