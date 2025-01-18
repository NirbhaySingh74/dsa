#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int FindMax(vector<int> &nums)
{
    int num = nums[0];
    for (int i : nums)
    {
        if (i > num)
        {
            num = i;
        }
    }
    return num;
}

int main()
{
    vector<int> nums = {2, 3, 4, 1, 3, 14, 3, 5};
    cout << FindMax(nums);
}