#include <iostream>
#include <vector>
using namespace std;

bool check_sorted(vector<int> &arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    vector<int> arr = {3, 4, 5, 1, 2};
    if (check_sorted(arr))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}