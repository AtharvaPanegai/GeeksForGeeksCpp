#include "bits/stdc++.h"
using namespace std;

int minDist(int arr[], int n, int x, int y)
{
    int posX = -1;
    int posY = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            posX = max(posX, i);
        }
        if (arr[i] == y)
        {
            posY = max(posY, i);
        }

    }
    int dist = 102356;
    if (posX > posY)
    {
        dist = min(posX - posY, dist);
    }
    else
    {
        dist = min(posY - posX, dist);
    }

    return dist;
}

int main()
{
    int arr[] = {1,2};
    int n = 2;
    cout << minDist(arr, n,1,2);

    return 0;
}