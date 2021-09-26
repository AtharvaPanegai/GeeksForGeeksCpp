#include "bits/stdc++.h"
using namespace std;

string AddBinaryStrings(string s, string p)
{
    int num1 = stoi(s, 0, 2);
    int num2 = stoi(p, 0, 2);

    int num3 = num1 + num2;
    string outputBefore = bitset<8>(num3).to_string();
    string outputAfter = "";
    for (int i = 0; i < outputBefore.length(); i++)
    {
        if (outputBefore[i] == '1')
        {
            outputAfter = outputBefore.substr(i);
        }
    }
    return outputAfter;
}

int main()
{
    string s = "1101";
    string p = "111";
    cout << AddBinaryStrings(s, p);

    return 0;
}