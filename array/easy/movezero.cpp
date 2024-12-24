#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void moveZeroToEnd(vector<int> &arr)
{
    vector<int> nums;
    for (int num : arr)
    {
        if (num != 0)
        {
            nums.push_back(num);
        }
    }

    // put nonzeros element in front
    for (int i = 0; i < nums.size(); i++)
    {
        arr[i] = nums[i];
    }

    // put zero element
    for (int i = nums.size(); i < arr.size(); i++)
    {
        arr[i] = 0;
    }
}

int main()
{
    vector<int> arr = {1, 2, 0, 4, 0, 5, 0, 8, 9, 7};
    moveZeroToEnd(arr);
    for (int num : arr)
    {
        cout << num << " ";
    }
}