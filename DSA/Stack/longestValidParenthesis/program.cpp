#include "bits/stdc++.h"
using namespace std;

int longestValid(string s, int n)
{

    // iterators
    int left = 0, right = 0, maxLength = 0;
    // left to right
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
        {
            left++;
        }
        else
        {
            right++;
        }
        if (right == left)
        {
            maxLength = max(maxLength, 2 * right);
        }
        else if (right > left)
        {
            right = left = 0;
        }
        left = right = 0;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == '(')
        {
            left++;
        }
        else
        {
            right++;
        }

        if (left == right)
        {
            maxLength = max(maxLength, 2 * left);
        }
        if (left > right)
        {
            left = right = 0;
        }
    }
    return maxLength;
}

int main()
{
    cout << longestValid("((()()()()(((())", 16);
    return 0;

    return 0;
}