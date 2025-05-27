#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> nextPermutation(vector<int> &nums)
{
    next_permutation(nums.begin(), nums.end());
    return nums;
}

int main()
{
    vector<int> nums = {1, 3, 2};
    nextPermutation(nums);

    for (int num : nums)
    {
        cout << num << " ";
    }
}