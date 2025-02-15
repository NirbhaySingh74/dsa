#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// bruteforce taking near about o(n^2) Time complexity
int brute_findMajorityNum(vector<int> &nums, int N)
{
    int count;
    for (int i = 0; i < N - 1; i++)
    {
        count = 1;
        int howmanytimes = 0;
        for (int j = i + 1; j < N; j++)
        {
            if (nums[i] == nums[j])
            {
                count++;
            }
            howmanytimes++;
        }
        cout << "For : " << nums[i] << " inner Loop runs : " << howmanytimes << "times" << endl;
        // cout << count << " " << endl;
        if (count > N / 2)
            return nums[i];
    }
    return -1;
}

// better approach using map which takes o(N log N) time complexity
int better_approach(vector<int> &nums, int N)
{
    map<int, int> mp;
    for (int i = 0; i < N; i++)
    {
        mp[nums[i]]++;
    }

    for (auto it : mp)
    {
        if (it.second > (N / 2))
            return it.first;
    }
    return -1;
}

int main()
{
    vector<int> nums = {3, 2, 3, 4, 4, 4, 4};
    // cout << brute_findMajorityNum(nums, nums.size());
    cout << better_approach(nums, nums.size());
    return 0;
}