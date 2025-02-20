#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// brute force approach takes o(n^2) Time complexity
vector<int> printLeader_IN_Arr(vector<int> &nums, int n)
{
    vector<int> ans;
    for (int i = 0; i < n - 1; i++)
    {
        bool isLeader = true;
        for (int j = i + 1; j < n; j++)
        {
            if (nums[j] > nums[i])
            {
                isLeader = false;
                break;
            }
        }
        if (isLeader)
            ans.push_back(nums[i]);
    }
    ans.push_back(nums[n - 1]);
    return ans;
}

// optimal approach from back side takes o(n) time

vector<int> optimal_Leaders(vector<int> &nums)
{
    int n = nums.size(), maxi = INT8_MIN;
    vector<int> ans;
    for (int i = n - 1; i >= 0; i--)
    {
        if (nums[i] > maxi)
        {
            maxi = nums[i];
            ans.push_back(nums[i]);
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    vector<int> nums = {10, 22, 12, 0, 4, 8};
    vector<int> ans;
    // ans = printLeader_IN_Arr(nums, nums.size());
    ans = optimal_Leaders(nums);
    for (int num : ans)
    {
        cout << num << " ";
    }
}