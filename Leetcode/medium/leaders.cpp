#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// brute force approach 
vector<int> printLeader_IN_Arr(vector<int> &nums, int n)
{
    vector<int> ans;
    ans.push_back(nums[n - 1]);
    int leaders = nums[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        if (nums[i] > leaders)
        {
            ans.push_back(nums[i]);
            leaders = nums[i];
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}



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
    ans = printLeader_IN_Arr(nums, nums.size());
    // ans = optimal_Leaders(nums);
    for (int num : ans)
    {
        cout << num << " ";
    }
}