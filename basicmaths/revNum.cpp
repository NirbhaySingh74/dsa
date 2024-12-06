#include <iostream>
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

int main()
{
    int n;
    cout << "Enter The Number" << endl;
    cin >> n;
    cout << revnum(n) << endl;
    checkPalindrome(n);
}