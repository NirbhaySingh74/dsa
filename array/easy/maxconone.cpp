#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int findMaxConsecutiveOnes(vector<int> &nums)
{
    int mx = 0, count = 0;

    for (int num : nums)
    {
        if (num == 1)
        {
            count = count + 1;
        }
        else
        {

            count = 0;
        }
        mx = max(mx, count);
    }
    return mx;
}

int main()
{
    vector<int> nums = {1, 1, 0, 1, 1, 1};
    cout << findMaxConsecutiveOnes(nums);

    return 0;
}