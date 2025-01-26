#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Brute Approach for move zero to end time complexity = 0(n) and space complexity = 0(n)
void movezero(vector<int> &nums)
{
    vector<int> temp;
    int n = nums.size();
    for (int num : nums)
    {
        if (num > 0)
        {
            temp.push_back(num);
        }
    }

    for (int i = 0; i < temp.size(); i++)
    {
        nums[i] = temp[i];
    }

    for (int i = temp.size(); i < n; i++)
    {
        nums[i] = 0;
    }
}

int main()
{
    vector<int> nums = {1, 0, 2, 3, 0, 4, 0, 1};
    movezero(nums);

    for (int num : nums)
    {
        cout << num << " ";
    }
    return 0;
}