#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Time complexity: O(n log n) + O(n) ≈ O(n log n).
int longestConsecutiveSeq_Brut(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int longest = 1, mx = 1;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] != nums[i - 1])
        {
            if (nums[i] - nums[i - 1] == 1)
            {
                longest++;
            }
            else
            {
                mx = max(longest, mx);
                longest = 1;
            }
        }
    }
    return mx;
}

int main()
{
    vector<int> nums = {1, 11, 2, 3, 6, 4, 100, 5, 101, 102, 3, 103};
    cout << longestConsecutiveSeq_Brut(nums);
    return 0;
}