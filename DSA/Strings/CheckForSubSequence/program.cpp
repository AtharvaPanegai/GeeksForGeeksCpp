// Recursive method

#include "bits/stdc++.h"
using namespace std;

bool isSubSequnce(string s1, string s2, int m, int n)
{
    if (m == 0)
    {
        return true;
    }
    if (n == 0)
    {
        return false;
    }

    if (s1[m - 1] == s2[n - 1])
    {
        return isSubSequnce(s1, s2, m - 1, n - 1);
    }

    return isSubSequnce(s1, s2, m, n - 1);
}

int main()
{
    string s1 = "gksrek";
    string s2 = "geeksforgeeks";
    int m = s1.length();
    int n = s2.length();

    cout << isSubSequnce(s1, s2, m, n);

    return 0;
}