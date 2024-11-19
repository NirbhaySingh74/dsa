#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter N : " << endl;
    cin >> n;
    // for (int i = n; i >= 1; i--)
    // {
    //     int start = 'A';
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << start;
    //         start++;
    //     }
    //     cout << endl;
    // }

    for (int i = n; i >= 1; i--)
    {
        // star
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        //    space
        for (int k = 1; k <= (n - i); k++)
        {
            cout << " ";
        }
        // right side space
        for (int k = 1; k <= (n - i); k++)
        {
            cout << " ";
        }
        // right sidestar
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout<<endl;
    }
}