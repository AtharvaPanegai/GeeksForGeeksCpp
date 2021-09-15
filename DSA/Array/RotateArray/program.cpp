#include "bits/stdc++.h"
using namespace std;

void leftRotateArrayOne(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;
}

void leftRotateArray(int arr[],int n,int d){
    for(int i= 0;i<d;i++){
        leftRotateArrayOne(arr,n);
    }
}

int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int d = 3;
    leftRotateArray(arr,10,3);
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
    


    return 0;
}