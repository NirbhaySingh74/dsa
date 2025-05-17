#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int brute(vector<int> &nums, int window)
{
    int sum = 0;
    int maxSum = 0;
    for (int i = 0; i <= nums.size()-window; i++)
    {
        for (int j = i; j < i + window; j++)
        {
            sum = sum + nums[j];
        }
        cout<<sum<<endl;
        maxSum = max(maxSum, sum);
        sum = 0;
    }
    return maxSum;
}

int main()
{
    vector<int> nums = {2, 3, 5, 2, 9, 7, 1};
    cout << "Max Sum - " << brute(nums, 3);
}