#include <iostream>
using namespace std;
int main()
{
    int num, count = 0;
    cout << "Enter Number" << endl;
    cin >> num;

    while (num != 0)
    {
        /* code */
        int lastDigit = num % 10;
        count++;
        num = num / 10;
    }
    cout << "Total Digit is " << count;
}