#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// this takes o(N) Time complexity which is not efficient
int gcd(int num1, int num2)
{

    for (int i = min(num1, num2); i >= 1; i--)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {

            return i;
            break;
        }
    }
    return -1;
}
// Euclidean Algorithm This approach runs in O(log N) time
int gcd2(int num1, int num2)
{
    while (num2 != 0)
    {
        int temp = num2;
        num2 = num1 % num2;
        // cout << "num2 - " << num2 << endl;
        num1 = temp;
        // cout << "num1 - " << num1 << endl;
    }
    return num1;
}

int main()
{
    int firstNum = 12, secondNum = 18;
    cout << gcd2(firstNum, secondNum);
}