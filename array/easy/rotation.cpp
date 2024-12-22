#include <bits/stdc++.h>
#include <iostream>
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
    int n = arr.size();
    k = k % n;

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
        arr[j] = temp[j - (n - k)];
    }
}

void left_Rotate_By_K_Optimal(int arr[], int n, int k)
{
    reverse(arr, arr + k);
    reverse(arr + k, arr + n);
    reverse(arr, arr + n);
}

void right_rotate_1_place(int arr[], int n)
{
    int temp = arr[n - 1];
    // arr[0] = temp;
    for (int i = n - 1; i >= 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int nums[] = {1, 2, 3, 4, 5, 6, 7};
    // leftRoteteBy1Place(arr, arr.size());
    // left_Rotate_By_K_Place(arr, 7);
    left_Rotate_By_K_Optimal(nums, 6, 4);
    right_rotate_1_place(nums, 7);
    for (int num : nums)
    {
        cout << num << " ";
    }
    return 0;
}
