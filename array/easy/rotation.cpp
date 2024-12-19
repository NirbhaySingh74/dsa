#include <iostream>
#include <vector>
using namespace std;

void leftRoteteBy1Place(vector<int> &arr, int n)
{
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
}

void left_Rotate_By_K_Place(vector<int> &arr, int k)
{
    vector<int> temp;
    int n = arr.size(), t = 0;
    for (int i = 0; i < k; i++)
    {
        temp.push_back(arr[i]);
    }

    for (int i = k; i < n; i++)
    {
        arr[i - k] = arr[i];
    }

    for (int j = n - k; j < n; j++)
    {
        arr[j] = temp[t];
        t++;
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    // leftRoteteBy1Place(arr, arr.size());
    left_Rotate_By_K_Place(arr, 3);
    for (int num : arr)
    {
        cout << num << " ";
    }
    return 0;
}
