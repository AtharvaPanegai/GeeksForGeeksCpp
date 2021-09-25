#include "bits/stdc++.h"
using namespace std;
const int maxChar = 26;

char nonRepeatingChar(string s)
{
    int arr[maxChar] = {0};

    for (int i = 0; i < maxChar; i++)
    {
        arr[s[i]-'a']++;
    }
    for (int i = 0; i < maxChar; i++)
    {
        if (arr[s[i]-'a'] == 1)
        {
            return s[i];
        }
    }
    return '$';
}

int main()
{
    string s = "hello";
    cout << nonRepeatingChar(s);

    return 0;
}