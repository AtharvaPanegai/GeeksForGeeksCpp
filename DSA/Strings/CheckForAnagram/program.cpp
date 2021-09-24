#include "bits/stdc++.h"
using namespace std;

#define noOFchars 256

bool isAnagramPalindrome(string s)
{
    // create an array to store element's count
    int count[noOFchars] = {0};

    for (int i = 0; i < s.length(); i++)
    {
        count[s[i]]++;
    }

    int odd = 0;

    for (int i = 0; i < noOFchars; i++)
    {
        if (count[i] % 2 == 1)
        {
            odd++;
        }
    }

    if (odd > 1)
    {
        return false;
    }

    return true;
}



int main()
{
    cout << isAnagramPalindrome("geeksogeeks");

    return 0;
}