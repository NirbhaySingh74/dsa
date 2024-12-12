#include <iostream>
#include <vector>
using namespace std;

void printsubarr(vector<int> &arr)
{
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            // Print the current subarray
            cout << "[ ";
            for (int k = i; k <= j; k++) {
                cout << arr[k] << " ";
            }
            cout << "]" << endl;
        }
    }
}

int main()
{
    vector<int> arr = {1,2,3,4};
    printsubarr(arr);
}