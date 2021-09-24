#include "bits/stdc++.h"
using namespace std;

void caseConverion(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            s[i + 1] = s[i + 1] - 32;
        }
        else if (i == 0 && (s[i] >= 'a' && s[i] <= 'z'))
        {
            s[i] = s[i] - 32;
        }
    }

    cout << s;
}

int main()
{
    string s = "GeEkSfOrGeEkS";
    caseConverion(s);

    return 0;
}