#include "bits/stdc++.h"
using namespace std;

void findDuplicates(int arr[], int n)
{

    int hSize = 100000;
    int hsh[hSize] = {0};

    for (int i = 0; i < n; i++)
    {
        hsh[arr[i]]++;
    }
    for (int i = 0; i < hSize; i++)
    {
        if (hsh[i] > 1)
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int arr[] = {2, 3, 1, 2, 3};
    findDuplicates(arr, 5);

    return 0;
}