#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// takes o(n^2) time
int countSubArrGivenSum(vector<int> &nums, int k)
{
    int count = 0;
    int n = nums.size();
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

// using prefixsum
int prefixSum(vector<int> &nums, int k)
{
    map<int, int> mpp;
    mpp[0] = 1;
    int preSum = 0, cnt = 0, n = nums.size();
    for (int i = 0; i < n; i++)
    {
        preSum = preSum + nums[i];
        int remove = preSum - k;
        cnt += mpp[remove];

        mpp[preSum] += 1;
    }
    return cnt;
}
int main()
{
    vector<int> nums = {1, 2, 3, -3, 1, 1, 1, 4, 2, -3};
    // cout << countSubArrGivenSum(nums, 3);
    cout << prefixSum(nums, 3);
    return 0;
}