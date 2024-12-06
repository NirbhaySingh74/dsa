#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int revnum(int n)
{
    int revNum = 0, rem = 1;
    while (n > 0)
    {
        rem = n % 10;
        revNum = (revNum * 10) + rem;
        n = n / 10;
    }
    return revNum;
}

void checkPalindrome(int n)
{
    int revNum = 0, rem = 1, originalNum = n;
    while (n > 0)
    {
        rem = n % 10;
        revNum = (revNum * 10) + rem;
        n = n / 10;
    }

    if (originalNum == revNum)
    {
        cout << "Number is palindrome" << endl;
    }
    else
    {
        cout << "Number is not palindrome" << endl;
    }
}

bool isArmstrong(int num)
{

    int k = to_string(num).length();

    int sum = 0;

    int n = num;

    while (n > 0)
    {

        int ld = n % 10;

        sum += pow(ld, k);

        n = n / 10;
    }

    return sum == num;
}

int main()
{
    int n;
    cout << "Enter The Number" << endl;
    cin >> n;
    // cout << revnum(n) << endl;
    // checkPalindrome(n);
    if (isArmstrong(n))
    {
        cout << n << " is an Armstrong number." << endl;
    }
    else
    {
        cout << n << " is not an Armstrong number." << endl;
    }
}