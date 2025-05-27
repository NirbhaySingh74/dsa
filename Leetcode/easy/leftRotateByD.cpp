#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// brute approach to left rotate by d place
void leftRotByDBrute(vector<int> &nums, int d)
{
    vector<int> temp1;
    vector<int> temp2;
    int n = nums.size();
    // for optimization
    d = d % n;
    // put 1st n-d element into the array
    for (int i = 0; i < n - d; i++)
    {
        temp1.push_back(nums[i]);
    }
    // put from  n-d to n element into the array
    for (int i = n - d; i < n; i++)
    {
        temp2.push_back(nums[i]);
    }

    // put n-d to n elment first
    int i = 0;
    for (int num : temp2)
    {
        nums[i] = num;
        i++;
    }
    // put rest element
    for (int num : temp1)
    {
        nums[i] = num;
        i++;
    }
}

// left rotate by d place optimal approach
// Time Complexity: o(n), space com : 0(1)
void lrbd(vector<int> &nums, int d)
{
    int n = nums.size();
    d = d % n;
    reverse(nums.begin(), nums.end() - d);
    reverse(nums.end() - d, nums.end());
    reverse(nums.begin(), nums.end());
}
int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    // leftRotByDBrute(nums, 10);
    lrbd(nums, 3);

    for (int num : nums)
    {
        cout << num << " ";
    }
}