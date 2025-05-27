#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int maxsubsum(vector<int> &nums)
{
    int sum = 0, maxi = INT_MIN;
    for (int num : nums)
    {
        sum = sum + num;

        if (sum > maxi)
        {
            maxi = sum;
        }

        if (sum < 0)
        {
            sum = 0;
        }
    }
    return maxi;
}
int main()
{
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout<<maxsubsum(nums);
    return 0;
}