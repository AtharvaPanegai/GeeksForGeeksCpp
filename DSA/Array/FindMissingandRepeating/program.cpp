#include "bits/stdc++.h"
using namespace std;

void duplicateRepeating(vector<int> arr)
{
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == arr[i + 1])
        {
            cout << "Duplicate is : " << arr[i] << "\n";
            if (i == 0 || arr[i] - arr[i - 1] == 2)
            {
                arr[i]--;
                cout << "Replaced Number is  : " << arr[i] << "\n";
            }
        }
    }
}

int main()
{
    vector<int> arr = {1, 3, 3};
    duplicateRepeating(arr);

    return 0;
}