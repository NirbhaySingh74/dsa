#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// longest subarray with given sum this is brute methon which takes time complexity near about o(n^3)
int longest_subarr(vector<int> &nums, int k)
{
    int mx = 0, count = 0, n = nums.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum = sum + nums[k];
            }
            if (sum == k)
            {
                count = (j - i) + 1;
                mx = max(mx, count);
            }
        }
    }
    return mx;
}

// using 2 loop it takes o(n^2) Time complexity
int longest_subarrtwoloop(vector<int> &nums, int k)
{
    int mx = 0, n = nums.size();
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum = sum + nums[j];
            if (sum == k)
            {

                mx = max(mx, (j - i) + 1);
            }
        }
    }
    return mx;
}

// optimal approach 2 pointer which takes o(2 ^ n) time complexity and o(1) space complexity
int optimal_twopointer(vector<int> &nums, int k)
{
    int left = 0, right = 0, sum = nums[right], maxLen = 0;
    while (right < nums.size())
    {

        while (left <= right && sum > k)
        {
            sum = sum - nums[left];
            left++;
        }
        if (sum == k)
        {
            maxLen = max(maxLen, right - left + 1);
        }
        right++;
        sum += nums[right];
    }
    return maxLen;
}

int main()
{
    vector<int> nums = {2, 3, 2, 3, 2, 9};
    // cout << longest_subarr(nums, 13) << endl;
    // cout << longest_subarrtwoloop(nums, 7) << endl;
    cout << optimal_twopointer(nums, 9) << endl;
}