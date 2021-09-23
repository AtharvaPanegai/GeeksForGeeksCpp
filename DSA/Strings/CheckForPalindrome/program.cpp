#include "bits/stdc++.h"
using namespace std;

bool isPalindrome(string s)
{
    int l = 0;
    int h = s.length() - 1;

    while (l < h)
    {
        if (s[l++] != s[h--])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    cout<<isPalindrome("abba");
    cout<<isPalindrome("abbccbba");
    cout<<isPalindrome("geeks");

    return 0;
}