#include <iostream>
using namespace std;

int fn(int n)
{
    if (n <= 1)
        return n;

    return fn(n - 1) + fn(n - 2);
}

int main()
{
    cout << fn(10) << endl;
}