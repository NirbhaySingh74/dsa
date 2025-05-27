#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int score_of_s(string &s)
{
    int ans = 0;
    for (int i = 1; i < s.size(); i++)
    {
        int prev = s[i - 1];
        int current = s[i];
        int difference = abs(int(prev) - int(current));
        ans = ans + difference;
    }
    return ans;
}

int main()
{
    string s = "hello";
    cout << score_of_s(s);
}