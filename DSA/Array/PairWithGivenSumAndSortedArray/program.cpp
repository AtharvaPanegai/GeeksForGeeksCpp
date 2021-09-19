#include "bits/stdc++.h"
using namespace std;

int NumberOfPairs(int arr[],int n,int x){
    int count = 0;
    int j=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[j]+arr[i]==x){
            count++;
        }
        
    }
    
    
}

int main()
{

    return 0;
}