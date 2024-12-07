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

void printname(int n)
{
    if (n == 0)
    {
        return;
    }

    cout << "Nirbhay" << " ";
    printname(n - 1);
}

int sumofN(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + sumofN(n - 1);
}

int factorialOfN(int n)
{
    if (n == 1)
        return 1;

    return n * factorialOfN(n - 1);
}

int main()
{
    // printNTo1(10);
    // print1toN(1, 10);
    // printname(5);
    // cout << sumofN(10) << endl;
    cout << factorialOfN(5) << endl;
}