#include "bits/stdc++.h"
using namespace std;

string saveIronMan(string s)
{
    string checkString = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            checkString += s[i];
        }

        else if ((s[i] >= 'A' && s[i] <= 'Z'))
        {
            checkString += s[i];
        }
    }
    // convert it to lower case
    for (int i = 0; i < checkString.length(); i++)
    {
        if ((checkString[i] >= 'a' && checkString[i] <= 'z'))
        {
            checkString[i] = checkString[i] - 32;
        }
    }
    // cout << checkString;

    return checkString;
}

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
    string s = "I am :IronnorI Ma, i";
    string checkString = saveIronMan(s);
    cout << isPalindrome(checkString);

    return 0;
}