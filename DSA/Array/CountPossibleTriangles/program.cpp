#include "bits/stdc++.h"
using namespace std;

void numberOfTriangle(vector<int> A)
{
    int n = A.size();
    // sort the array
    sort(A.begin(),A.end());
    int count = 0;
    for (int i = n - 1; i >= 1; i++)
    {
        int l = 0;
        int r = i - 1;
        while (l < r)
        {
            if (A[l] + A[r] > A[i])
            {
                count += r - l;
                r--;
            }
            else
            {
                l++;
            }
        }
    }
    cout << count;
}

int main()
{
    vector<int> A = { 4, 3, 5, 7, 6 };
    numberOfTriangle(A);
}