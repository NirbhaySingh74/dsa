#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// find fabonici of number
int fabonici(int n)
{
    if (n <= 1)
        return n;
    return fabonici(n - 1) + fabonici(n - 2);
}
int main()
{
    cout << fabonici(5);
    return 0;
}