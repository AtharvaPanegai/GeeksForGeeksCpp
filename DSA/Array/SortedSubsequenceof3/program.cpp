#include "bits/stdc++.h"
using namespace std;

int numberofSubStrings(vector<int> a)
{
    int count = 0;
    int i = 0;
    int r = a.size() - 3;
    // sort(a.begin(), a.end());
    for (int i = 0; i < a.size()-3; i++)
    {
        if (a[i] < a[i + 1] < a[i + 2])
        {
            count++;
            // cout << a[i] << " " << a[i + 1] << " " << a[i + 2] << " ";
        }
    }

    return count;
}

int main()
{
    vector<int> a = {1,1,3};
    cout<<numberofSubStrings(a);

    return 0;
}