#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int isPresent(vector<int> &nums, int target)
{
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == target)
        {
            return i;
        }
    }
    return -1;
}

void main()
{
    vector<int> nums = {1, 2, 5, 2, 4, 2};
}