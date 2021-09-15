#include "bits/stdc++.h"
using namespace std;

int removeDuplicate(int arr[], int n)
{

    if (n == 0 || n == 1)
    {
        return n;
    }
    int temp[n];
    // now if the 2 corresponding elements are not same then add the element to the temp array
    int j = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            temp[j++] = arr[i];
        }
    }
    // add last element of the array to the temp array
    temp[j++] = arr[n - 1];

    // now replace the original array with temp
    for (int i = 0; i < j; i++)
    {
        arr[i] = temp[i];
    }

    return j;
}

int main()
{
    int arr[] = {1, 2, 2};
    int n = 3;
    n = removeDuplicate(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}