#include "bits/stdc++.h"
using namespace std;

void reverseOrderOfwordsInGivenString(string s)
{
    string resString = "";
    string finalResult = "";
    reverse(s.begin(), s.end());
    for (int i = 0; i <= s.length(); i++)
    {
        resString += s[i];
        if (s[i] == '.')
        {
            reverse(resString.begin(), resString.end());
            finalResult += resString;
            resString = "";
        }
    }
    cout << finalResult + "." + resString;
}
int main()
{
    string s = "i.like.this.program.very.much";
    reverseOrderOfwordsInGivenString(s);

    return 0;
}