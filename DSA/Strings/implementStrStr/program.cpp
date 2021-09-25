#include "bits/stdc++.h"
using namespace std;

int returnIndexOfX(string s, string x)
{
    size_t found = s.find(x);
    if (found != string::npos)
    {
        return found;
    }
    return -1;
}

int main()
{
    string s = "GeeksForGeeks";
    string x = "For";
    cout << returnIndexOfX(s, x);

    return 0;
}