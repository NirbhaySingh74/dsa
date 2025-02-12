#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// brute force tales 0(n^2) time complexity
int single_num(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (nums[j] == nums[i])
            {
                count = count + 1;
            }
        }
        if (count == 1)
            return nums[i];
    }
    return -1;
}

// better apprach
int better_approach(vector<int> &nums)
{
    map<int, int> mp;

    // store array element to map
    for (int num : nums)
    {
        mp[num]++;
    }

    for (const auto &pair : mp)
    {
        if (pair.second == 1)
        {
            return pair.first;
        }
    }
    return -1;
}
int main()
{
    vector<int> nums = {1, 1, 2, 3, 3, 4, 4, 5, 5};
    // cout << single_num(nums);
    cout << better_approach(nums);
    return 0;
}