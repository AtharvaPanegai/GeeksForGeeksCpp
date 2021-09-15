#include "bits/stdc++.h"
using namespace std;

int numberOfSmallerElements(int arr[], int x, int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < x)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int arr[] = {1, 2, 4, 5, 8, 10};
    int x = 9;
    cout<<numberOfSmallerElements(arr,x,6);
    return 0;
}