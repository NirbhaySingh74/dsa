#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string mergeAlternately(string word1, string word2)
{
    string ans;
    int n = word1.size(), m = word2.size();
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        ans.push_back(word1[i]);
        ans.push_back(word2[j]);
        i++;
        j++;
    }

    while (i < n)
    {
        ans.push_back(word1[i]);
    }

    while (j < m)
    {
        ans.push_back(word2[j]);
    }

    return ans;
}

int main()
{
    string word1 = "abc";
    string word2 = "pqr";
    string ans = mergeAlternately(word1, word2);
    cout << ans;
}