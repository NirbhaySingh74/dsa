#include <iostream>
using namespace std;

int revnum(int n)
{
    int revNum = 0, rem = 1;
    while (n > 0)
    {
        rem = n % 10;
        revNum = (revNum * 10) + rem;
        n = n / 10;
    }
    return revNum;
}
int main()
{
    int n;
    cout << "Enter The Number You want to reverse" << endl;
    cin >> n;
    cout << revnum(n) << endl;
}