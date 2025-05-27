#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// find minimunm subarr sum brute
int minSubArrayLen(int target, vector<int> &nums)
{
    int n = nums.size();
    int minimum = INT_MAX;
    bool isFound = false;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum = sum + nums[j];
            if (sum == target || sum > target)
            {
                minimum = min(minimum, (j - i + 1));
                isFound = true;
            }
        }
    }
    return isFound ? minimum : 0;
}

int main()
{
    vector<int> nums = {2, 3, 1, 2, 4, 3};
    cout << minSubArrayLen(7, nums);
    return 0;
}