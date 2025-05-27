#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int countFreq(vector<int> &nums)
{
    int n = nums.size();
    map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
        mp[nums[i]]++;
        if (mp[nums[i]] > n / 2)
        {
            return nums[i];
        }
       
    }
    return -1;
}

int main()
{
    vector<int> nums = {3, 4, 5, 3, 5, 3, 3, 4, 3, 3};
    cout << countFreq(nums);
    return 0;
}