#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int first_occurence(vector<int> &nums, int target)
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

int main()
{
    vector<int> nums = {1, 4, 2, 3, 6, 7, 8, 5};
    cout << first_occurence(nums, 6);
}