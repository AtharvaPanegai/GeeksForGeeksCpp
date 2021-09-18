#include "bits/stdc++.h"
using namespace std;



void convertToWaveArray(int arr[], int n)
{   
    for (int i = 0; i < n-1; i += 2)
    {
        swap(arr[i], arr[i + 1]);
    }

}

int main()
{
    int arr[] = {2,4,7,8,9,10};
    convertToWaveArray(arr, 6);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}