#include <iostream>
using namespace std;

void printNTo1(int n)
{
    if (n == 0)
    {
        cout << endl;
        return;
    }
    cout << n << " ";
    printNTo1(n - 1);
}

void print1toN(int current, int n)
{
    if (current > n)
    {
        return;
    }
    cout << current << " ";
    print1toN(current + 1, n);
}

int main()
{
    printNTo1(10);
    print1toN(1, 10);
}