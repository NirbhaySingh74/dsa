#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isArmstrong(int num)
{
    int sum = 0, originalNum = num;
    while (num > 0)
    {
        int ld = num % 10;
        sum = sum + (ld * ld * ld);
        num = num / 10;
    }

    return originalNum == sum;
}

int main()
{
    int num = 1543;
    if (isArmstrong(num))
    {
        cout << "Number is Armstrong";
    }
    else
    {
        cout << "Number is Not Armstrong";
    }
}