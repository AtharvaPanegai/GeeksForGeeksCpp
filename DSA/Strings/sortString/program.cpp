#include "bits/stdc++.h"
using namespace std;

void sortedString(string s)
{

    sort(s.begin(), s.end());
    reverse(s.begin(), s.end());

    cout << s;
}

int main()
{
    string s = "geeks";
    sortedString(s);
    return 0;
}