#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int Longest_Subarray_with_sum_K(vector<int> &nums, int target)
{
    int len = 0, n = nums.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum = sum + nums[k];
            }
            if (sum == target)
            {
                len = max(len, j - i + 1);
            }
        }
    }
    return len;
}

int main()
{
    vector<int> nums = {1, 2, 4, 3, 2, 1, 1, 4, 5};
    cout << Longest_Subarray_with_sum_K(nums, 3) << endl;
    return 0;
}