#include "bits/stdc++.h"
using namespace std;
#define maxChar 26

bool kAnagram(string s1, string s2, int k)
{
    if (s1.length() != s2.length())
    {
        return false;
    }

    int n = s1.length();
    int count1[maxChar] = {0};
    int count2[maxChar] = {0};

    for (int i = 0; i < n; i++)
    {
        count1[s1[i] - 'a']++;
    }
    for (int i = 0; i < n; i++)
    {
        count2[s2[i] - 'a']++;
    }
    int count = 0;

    for (int i = 0; i < 26; i++)
    {
        if (count1[i] > count2[i])
        {
            count = count + abs(count1[i] - count2[i]);
        }
    }

    return (count <= k);
}

int main()
{
    string s1 = "anagram";
    string s2 = "grammar";

    cout << kAnagram(s1, s2, 2);

    return 0;
}