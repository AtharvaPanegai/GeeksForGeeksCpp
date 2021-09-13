#include "bits/stdc++.h"
using namespace std;

// x number to be searched
// n size of array

bool search(int x, int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return true;
        }
    }
    return false;
}

bool insertInArray(int arr[], int x, int n, int pos)
{
    n++;
    for (int i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    // now insert element at pos
    arr[pos - 1] = x;
}

bool deleteX(int arr[], int x, int n)
{
    int pos = 0;
    for (int i = 0; i < n; i++)
    {
        pos++;
        if (arr[i] == x)
        {
            break;
        }
    }
    if (arr[pos] == x)
    {
        arr[pos] = NULL;
        if (pos < n - 1)
        {
            for (int i = pos; i < n; i++)
            {
                arr[i] = arr[i + 1];
            }
        }
        return true;
    }
    return false;
}

int main()
{

    return 0;
}