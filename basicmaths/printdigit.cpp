#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int countDigit(int num)
{
    int count = 0;
    while (num > 0)
    {
        /* code */
        int rem = num % 10;
        // cout << rem << " ";
        num = num / 10;
        count = count + 1;
    }
    return count;
}
int optimalCountDigit(int num)
{
    int count = (int)(log10(num) + 1);
    return count;
}
int reverseDigit(int num)
{
    int rev = 0;
    while (num > 0)
    {
        /* code */
        int rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    return rev;
}
int main()
{
    int num = 10400;
    // cout << num % 10;
    // while (num > 0)
    // {
    //     /* code */
    //     int rem = num % 10;
    //     cout << rem << " ";
    //     num = num / 10;
    // }

    // cout << "Total Digit - " << countDigit(num) << endl;
    // cout << "Total Digit - " << optimalCountDigit(num) << endl;
    // cout << log10(16);
    cout << "Reversed Digit : " << reverseDigit(num);
    return 0;
}