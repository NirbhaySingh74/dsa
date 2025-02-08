#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// brute takes O(n logn)
int largest(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    return nums[nums.size() - 1];
}

// optimal takes o(n)
int loptimal(vector<int> &nums)
{
    int largest = nums[0];
    for (int num : nums)
    {
        if (num > largest)
            largest = num;
    }
    return largest;
}

// send LArgest takes o(n) time
int sloptimal(vector<int> &nums)
{
    int l = nums[0], sl = -1;
    for (int num : nums)
    {
        if (num > l)
        {
            sl = l;
            l = num;
        }
        else if (num > sl && num != l)
        {
            sl = num;
        }
    }
    return sl;
}

// smallest
int smallest(vector<int> &nums)
{
    int sm = nums[0];
    for (int num : nums)
    {
        if (num < sm)
            sm = num;
    }
    return sm;
}

// second smallest
int ssmallest(vector<int> &nums)
{
    int sm = INT_MIN, ssm = INT_MIN;
    for (int num : nums)
    {
        if (num < sm)
        {
            ssm = sm;
            sm = num;
        }
        else if (num < ssm && num != sm)
        {
            ssm = num;
        }
    }
    return ssm;
}

int mian()
{
    vector<int> nums = {11, 3, 4, 2, 6, 5};
    cout << "Largest : " << loptimal(nums) << endl;
    cout << "Smallest : " << smallest(nums) << endl;
    cout << "Second Smallest : " << ssmallest(nums) << endl;
}