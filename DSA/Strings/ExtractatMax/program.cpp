#include "bits/stdc++.h"
using namespace std;

int extractMax(string s)
{
    int num = 0;
    int res = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            num = num * 10 + s[i] - '0';
        }
        else
        {
            res = max(res, num);
            num = 0;
        }
    }

    return max(res, num);
}

int main()
{
    string str = "100klh564abc365bg";
    cout << extractMax(str);

    return 0;
}