#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// brute taking o(n^2) time
int maxSubSumBrut(vector<int> &nums)
{
    int mx = 0, sum, n = nums.size();
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {
            sum = sum + nums[j];
            mx = max(mx, sum);
        }
    }
    return mx;
}

// optimal kadans algorithm
int kadanes(vector<int> &nums)
{
    int maxi = INT_MIN, sum = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];

        maxi = max(maxi, sum);

        if (sum < 0)
            sum = 0;
    }

    return maxi;
}

int main()
{
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    // cout << maxSubSumBrut(nums) << endl;
    cout << kadanes(nums);
    // cout << INT_MIN;
}