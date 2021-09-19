#include "bits/stdc++.h"
using namespace std;

int rainWaterTrapping(int arr[], int n)
{
    int leftMaxArr[n];
    int rightMaxArr[n];
    leftMaxArr[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        leftMaxArr[i] = max(leftMaxArr[i - 1], arr[i]);
    }
    rightMaxArr[n-1] = arr[n-1];
    for(int i = n-2;i>=0;i--){
        rightMaxArr[i] = max(rightMaxArr[i+1],arr[i]);
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += (min(leftMaxArr[i],rightMaxArr[i])-arr[i]);
    }

    return ans;
    
}

int main()
{
    int arr[] = {3,0,0,2,0,4};
    int n = 6;
    cout<<rainWaterTrapping(arr,n);

    return 0;
}