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

void moveZeroes(vector<int> &nums)
{
    int j = -1;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 0)
        {
            j = i;
            break;
        }
    }

    if (j == -1)
        return;

    for (int i = j + 1; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            swap(nums[i], nums[j]);
            j++;
        }
    }
}

int main()
{
    vector<int> arr = {0, 1, 0, 3, 12};
    // moveZeroToEnd(arr);
    moveZeroes(arr);
    for (int num : arr)
    {
        cout << num << " ";
    }
}