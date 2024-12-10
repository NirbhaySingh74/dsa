#include <iostream>
using namespace std;

void printFibonacciSeries(int n)
{
    int prev = 0, curr = 1;
    cout << "Fibonacci Series: ";
    for (int i = 0; i < n; i++)
    {
        cout << prev << " ";
        int next = prev + curr;
        prev = curr;
        curr = next;
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the number of terms for the Fibonacci series: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Please enter a positive integer." << endl;
    }
    else
    {
        printFibonacciSeries(n);
    }

    return 0;
}