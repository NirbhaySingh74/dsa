#include <iostream>
using namespace std;

// print Name 5 Times
void printName(int count)
{
    if (count > 5)
        return;
    cout << "Nirbhay" << endl;
    printName(count + 1);
}

// Print Linerally from 1 To N
void print1ToNLin(int n, int i)
{
    if (i > n)
        return;
    cout << i << " ";
    print1ToNLin(n, i + 1);
}
// Print N to 1 using Backtracking
void printNTo1BackTracking(int n, int i)
{
    if (i > n)
        return;

    printNTo1BackTracking(n, i + 1);
    cout << i << " ";
}
// Print Linerally from 1 To N By BackTracking
void print1ToNBackTracking(int n)
{
    if (n < 1)
        return;
    print1ToNBackTracking(n - 1);
    cout << n << " ";
}

// Print N To 1
void printNTo1Lin(int n)
{
    if (n < 1)
        return;
    cout << n << " ";
    printNTo1Lin(n - 1);
}

// sum of first n numbers
int sum(int n)
{
    if (n == 1)
        return 1;
    return n + sum(n - 1);
}
int main()
{
    int n;
    cout << "Enter N" << endl;
    cin >> n;
    // printName(1);
    // print1ToNLin(n, 1);
    // printNTo1Lin(n);.
    // print1ToNBackTracking(n);
    // cout << endl;
    // printNTo1BackTracking(n, 1);
    cout << sum(n);
    return 0;
}