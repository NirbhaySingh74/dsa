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

// optimal approach which runs sqrt(num)
bool isPrimeOpt(int num)
{
    int count = 0;
    for (int i = 1; i * i <= num; i++)
    {
        cout << i << " ";
        if (num % i == 0)
        {
            count++;
            // cout << num / i << " " << endl;

            if (num / i != i)
                count++;
        }
    }
    cout << "Count" << count << endl;
    return count == 2;
}

int main()
{
    int num = 11;
    if (isPrimeOpt(num))
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}