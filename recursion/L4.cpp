#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// reverse an array using 2 pointer
void revArr(vector<int> &nums)
{
    int l = 0, r = nums.size() - 1;
    while (l < r)
    {
        int temp = nums[l];
        nums[l] = nums[r];
        nums[r] = temp;
        l++;
        r--;
    }
}
int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    revArr(nums);
    for (int num : nums)
    {
        cout << num << " ";
    }
}