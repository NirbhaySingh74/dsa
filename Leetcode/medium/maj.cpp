#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> majority_Element_3(vector<int> &nums)
{
    int n = nums.size();
    unordered_map<int, int> mpp;
    for (int num : nums)
    {
        mpp[num]++;
    }

    vector<int> ans;
    for (auto &entry : mpp)
    {
        if (entry.second > n / 3)
        {
            ans.push_back(entry.first);
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {11, 33, 33, 11, 33, 11};
    vector<int> answer;
    answer = majority_Element_3(nums);
    for (int num : answer)
    {
        cout << num << " ";
    }
}