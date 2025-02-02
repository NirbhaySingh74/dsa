#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// brute approach to check number is prime or not

bool isPrime(int num)
{
    if (num < 2)
        return false;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int num = 1;
    if (isPrime(num))
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}