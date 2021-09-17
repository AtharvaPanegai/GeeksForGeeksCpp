#include "bits/stdc++.h"
using namespace std;

int minDist(int arr[], int n, int x, int y)
{
    int posX=-1;
    int posY=-1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            posX = min(posX, i);
            cout << posX << " ";
        }
        if (arr[i] == y)
        {
            posY = min(posY, i);
            cout << posY << " ";
        }
    }
    int dist = INT_MAX;
    if (posX > posY)
    {
        dist = posX - posY;
    }
    else
    {
        dist = posY - posX;
    }

    return dist;
}

int main()
{
    int arr[] = {86,39,90,67,84,66,62};
    int n = 7;
    cout<<minDist(arr, n, 42, 12);

    return 0;
}