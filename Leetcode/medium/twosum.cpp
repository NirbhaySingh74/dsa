#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// brute force approach which takes o(n^2) Time complexity
vector<int> two_sum_brute(vector<int> &nums, int target)
{
    int n = nums.size();
    vector<int> ans;

    for (int i = 0; i < n - 1; i++)
    {

        for (int j = i + 1; j < n; j++)
        {

            if (nums[i] + nums[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                break;
            }
        }
    }
    return ans;
}

// better approach with hashing which takes o(n ^ logn) time complexity
vector<int> twosum_better(vector<int> &nums, int target)
{
    map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
        int more = target - nums[i];
        if (mp.find(more) != mp.end())
        {
            return {mp[more], i};
        }
        mp[nums[i]] = i;
    }
    return {-1, -1};
}

// ṭwo pointer approach
vector<int> twoPointerOptimal(vector<int> &nums, int target)
{
    sort(nums.begin(), nums.end());
    int left = 0, right = nums.size() - 1;

    while (left < right)
    {
        int sum = nums[left] + nums[right];
        if (sum == target)
        {
            return {left, right};
        }
        else if (sum > target)
        {
            right;
        }
        else
        {
            left--;
        }
    }
    return {};
}

int main()
{
    vector<int> nums = {2, 6, 5, 8, 11};
    int target = 11;
    vector<int> ans;
    // ans = two_sum_brute(nums, target);
    // ans = twosum_better(nums, target);
    ans = twoPointerOptimal(nums, target);

    for (int num : ans)
    {
        cout << num << " ";
    }
}