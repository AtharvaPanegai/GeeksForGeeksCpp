#include "bits/stdc++.h"
using namespace std;

int main(){
    int n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    // print
    for (int i = 0; i < n; i = i+2)
    {
        cout<<arr[i]<<" ";
    }
    

    

    return 0;
}