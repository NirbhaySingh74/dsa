#include <iostream>
#include <vector>
using namespace std;
void leftRoteteBy1Place(vector<int> &arr, int n)
{
    int temp = arr[0];
    for (int i = 1; i < n - 1; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
}
int mian()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    leftRoteteBy1Place(arr, arr.size());
    for (int num : arr)
    {
        cout << num << " ";
    }
}