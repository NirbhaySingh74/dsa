#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int gcd(int num1, int num2)
{
    int ans = 0;
    for (int i = 1; i < min(num1, num2); i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            ans = max(ans, i);
        }
    }
    return ans;
}

int main()
{
    int firstNum = 12, secondNum = 18;
    cout << gcd(firstNum, secondNum);
}