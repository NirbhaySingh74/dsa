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
        if (nums[i] == nums[i - 1]) continue;
        if (nums[i] - nums[i-1] == 1)
        {
            longest++;
        }
        else
        {
            longest = 1;
        }
        mx = max(mx, longest);
    }
    return mx;
}

// optimal approach
int optimal_Longest_con(vector<int> &nums)
{
    int n = nums.size(), longest = 1;
    if (n == 0)
        return 0;
    unordered_set<int> st;
    // insert element into set
    for (int num : nums)
    {
        st.insert(num);
    }

    for (auto it : st)
    {
        if (st.find(it - 1) == st.end())
        {
            int count = 1;
            int x = it;
            while (st.find(x + 1) != st.end())
            {
                /* code */
                x = x + 1;
                count = count + 1;
            }
            longest = max(longest, count);
        }
    }
    return longest;
}

int main()
{
    vector<int> nums = {3, 8, 5, 7, 6};
    cout << longestConsecutiveSeq_Brut(nums);
    // cout << optimal_Longest_con(nums);
    return 0;
}