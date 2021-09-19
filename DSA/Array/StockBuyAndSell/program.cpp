#include "bits/stdc++.h"
using namespace std;

int maxProfit(int arr[], int n)
{
    int minSoFar = INT_MAX;
    int maxProfit = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        minSoFar = min(arr[i], minSoFar);
        int profit = arr[i] - minSoFar;
        maxProfit = max(profit, maxProfit);
    }

    return maxProfit;
}

int main()
{

    return 0;
}