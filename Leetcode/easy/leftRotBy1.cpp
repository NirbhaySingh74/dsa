#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// The array is running for n time so the time complxity is 0(n) and space complexity is o(1)
void leftRotateBy1Place(vector<int> &nums)
{
    int n = nums.size();
    int firstElm = nums[0];
    for (int i = 1; i < n; i++)
    {
        nums[i - 1] = nums[i];
    }
    nums[n - 1] = firstElm;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    leftRotateBy1Place(nums);
    for (int num : nums)
    {
        cout << num << " ";
    }
    return 0;
}