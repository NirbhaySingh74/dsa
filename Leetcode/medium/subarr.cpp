#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// find totalsubarray sum equals to k
int find_totalsubarr(vector<int> &nums, int k)
{
    int n = nums.size();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum = sum + nums[j];
            if (sum == k)
                count++;
        }
    }
    return count;
}

int main()
{
    vector<int> nums = {1, 1, 1};
    cout << find_totalsubarr(nums, 2);
    return 0;
}