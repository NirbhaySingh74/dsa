#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int num)
{
    int revNum = 0, originalNum = num;
    while (num > 0)
    {
        int rem = num % 10;
        revNum = (revNum * 10) + rem;
        num = num / 10;
    }

    return originalNum == revNum;
}

int main()
{
    int num = 1231;
    if (isPalindrome(num))
    {
        cout << "Number is Palindrome";
    }
    else
    {
        cout << "Number is Not Palindrome";
    }
}