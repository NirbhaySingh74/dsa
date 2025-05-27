#include <iostream>
#include <bits/stdc++.h>
#include<numeric>
using namespace std;

string gcdOfStrings(string str1, string str2)
{
       
       if (str1 + str2 != str2 + str1) {
        return "";
    }
        
    int gcdLength = gcd(str1.size(), str2.size());

    
    return str2.substr(0, gcdLength);
}

int main()
{
    string str1 = "ABCD", str2 = "AB";
    string result = gcdOfStrings(str1, str2);
    // string result = "Nirbhay singh";
    cout << result;
    return 0;
}