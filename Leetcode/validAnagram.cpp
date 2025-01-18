#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void bruteApproach(string s1, string s2)
{
    // Time complexity will be 0(m logm) for sort s1 and o(n log n) for sort s2 thus total time complexity will be -> O(mlogm+nlogn)
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
}

void betterApproach(string s1, string s2)
{
    stack<string> st;
    st.push(s1);
    st.push(s2);
}

int main()
{
    string s1 = "nagaam", s2 = "anagram";
    bruteApproach(s1, s2);
    return 0;
}