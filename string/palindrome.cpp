#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str)
{
    int n = str.size() - 1;
    int i = 0;
    while (i < n)
    {
        if (str[i] != str[n])
            return false;

        i++;
        n--;
    }
    return true;
}

// reverse the word of string
string reverse_word(string str)
{
    string rev;
    for (int i = str.size() - 1; i >= 0; i--)
    {
        rev += str[i];
    }
    return rev;
}

int main()
{
    string s = "sachin";
    // if (isPalindrome(s))
    // {
    //     cout << "string is palindrome";
    // }
    // else
    // {
    //     cout << "string is not palindrome";
    // }
    cout << reverse_word(s);
}