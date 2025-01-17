#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1 = "nagaam", s2 = "anagram";
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    if (s1 == s2)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
    return 0;
}