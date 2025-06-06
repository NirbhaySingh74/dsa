#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// This is brute Approach which takes o(n^2)
bool isSortedBrute(vector<int> &nums, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[j] < nums[i])
            {
                return false;
            }
        }
    }
    return true;
}

// optimal approach which takes O(N) Time complexity
bool isSortedOptimal(vector<int> &nums, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (nums[i + 1] < nums[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 1};
    if (isSortedBrute(nums, nums.size()))
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
    cout << endl;
    if (isSortedOptimal(nums, nums.size()))
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
    return 0;
}