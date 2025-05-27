#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// brute approach to remove duplicates which is takinf o(n*lon(n)) where n is the size of  array
int removeDupBrute(vector<int> &nums)
{
    set<int> st;
    for (int num : nums)
    {
        st.insert(num);
    }
    int i = 0;
    for (int x : st)
    {
        nums[i] = x;
        i++;
    }
    return st.size();
}

// optimal approach which takes o(n) Time complexity
int removeDuplicates(vector<int> &nums)
{
    int i = 0;
    for (int j = 0; j < nums.size(); j++)
    {
        if (nums[j] != nums[i])
        {
            nums[i + 1] = nums[j];
            i++;
        }
    }
    return i;
}
int main()
{
    vector<int> nums = {1, 1, 2, 2, 3, 3};
    // cout << removeDupBrute(nums) << endl;
    cout << removeDuplicates(nums) << endl;

    for (int num : nums)
    {
        cout << num << " ";
    }
    return 0;
}