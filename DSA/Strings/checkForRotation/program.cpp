#include "bits/stdc++.h"
using namespace std;

bool isRotation(string s1, string s2)
{
    if (s1.length() != s2.length())
    {
        return false;
    }
    string temp = s1 + s2;
    return (temp.find(s2) != string::npos);
}

int main()
{
    string s1 = "geeksforgeeks";
    string s2 = "forgeeksgeeks";
    cout << isRotation(s1, s2);

    return 0;
}