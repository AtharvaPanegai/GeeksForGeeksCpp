#include "bits/stdc++.h"
using namespace std;

void ProductArray(int arr[],int n){
    int product = 1;
    for (int i = 0; i < n; i++)
    {
        product *=arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = product/arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    
}

int main()
{
    int arr[] = {10, 3, 5, 6, 2};
    ProductArray(arr,5);

    return 0;
}