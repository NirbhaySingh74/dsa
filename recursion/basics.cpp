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

void print1toNBackTracking(int n)
{
    if (n < 1)
    {
        return;
    }

    print1toNBackTracking(n - 1);
    cout << n << " ";
}

void printNto1BackTracking(int n)
{
    if (n < 1)
    {
        return;
    }

    print1toNBackTracking(n - 1);
    cout << n << " ";
}

int main()
{
    // printNTo1(10);
    // print1toN(1, 10);
    // printname(5);
    // cout << sumofN(10) << endl;
    // cout << factorialOfN(5) << endl;
    // print1toNBackTracking(10);
    int arr[] = {10, 20, 30, 40};
    int l = 0, r = 3;
    while (l < r)
    {
        int temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
        l++, r--;
    }

    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}