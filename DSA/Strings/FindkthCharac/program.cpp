#include "bits/stdc++.h"
using namespace std;

void binaryConversion(string &s, int m)
{
    s = bitset<8>(m).to_string();
}

int findKthChar(int m, int n, int k)
{
    string s;
    binaryConversion(s, m);
    string s1 = "";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < s.length(); j++)
        {
            if (s[j] == '1')
            {
                s1 += "10";
            }
            else
            {
                s1 += "01";
            }
        }
        s = s1;
        s1 = "";
    }
    return s[k] - '0';
}

int main()
{
    int m = 5, n = 2, k = 8;
    cout << findKthChar(n, m, k);
    return 0;

    return 0;
}