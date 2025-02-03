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
int main()
{
    int n;
    cout << "Enter N" << endl;
    cin >> n;
    // printName(1);
    print1ToNLin(n, 1);
    return 0;
}