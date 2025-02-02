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

int main()
{
    int num = 36;
    printAllDiv(num);
}