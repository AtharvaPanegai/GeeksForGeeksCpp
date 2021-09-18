#include "bits/stdc++.h"
using namespace std;

int majorityElement(int arr[], int n)
{
    int aux[100] = {0};
    for (int i = 0; i < n; i++)
    {
        aux[arr[i]]++;
    }
    int major = INT_MIN;
    for (int i = 0; i < 100; i++)
    {
        major = max(aux[i],major);
    }
    for (int i = 0; i < 100; i++)
    {
        if(aux[i]==major){
            return i;
        }        
    }
    return -1;
    

}

int main()
{
    int arr[] = {3, 1, 3, 3, 2};
    cout<<majorityElement(arr, 5);

    return 0;
}