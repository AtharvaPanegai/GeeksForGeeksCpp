#include "bits/stdc++.h"
using namespace std;

int longestsubStrPalindrome(string s)
{
    int l = 0;
    int h = s.length();
    int maxLength = INT_MIN;

    string r = s.substr(l, h);

    while (l < h)
    {
        if (r[l++] != r[h--])
        {
            continue;
        }
        maxLength = max(maxLength, (h - l));
        l++, h--;
    }

    return maxLength;
}

int main()
{
    string s = "babcbabcbaccba";
    cout << longestsubStrPalindrome(s);

    return 0;
}