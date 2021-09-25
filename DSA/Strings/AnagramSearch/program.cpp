#include "bits/stdc++.h"
using namespace std;
const int maxChar = 26;

int reAnargam(string s1, string s2)
{
    int arr[maxChar] = {0};
    int brr[maxChar] = {0};

    for (int i = 0; i < s1.length(); i++)
    {
        arr[s1[i] - 'a']++;
    }
    for (int i = 0; i < s2.length(); i++)
    {
        brr[s2[i] - 'a']++;
    }

    int count = 0;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > brr[i])
        {
            count += arr[i] - brr[i];
        }
        else if (brr[i] > arr[i])
        {
            count += brr[i] - arr[i];
        }
    }

    return count;
}

int main()
{
    string s1 = "cddgk";
    string s2 = "gcd";

    cout << reAnargam(s1, s2);

    return 0;
}