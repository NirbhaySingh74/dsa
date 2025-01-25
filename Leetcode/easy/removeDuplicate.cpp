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

int main()
{
    vector<int> nums = {1, 1, 2, 2, 2, 3, 3};
    cout << removeDupBrute(nums) << endl;

    for (int num : nums)
    {
        cout << num << " ";
    }
    return 0;
}