#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printAllDiv(int num)
{
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            cout << i << " ";
        }
    }
}

// optimal approach to print division
void optimalPrintDiv(int num)
{
    for (int i = 1; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            cout << i << " ";
            if ((num / i) != i)
            {
                cout << num / i << " ";
            }
        }
    }
}

int main()
{
    int num = 36;
    // printAllDiv(num);
    optimalPrintDiv(num);
}