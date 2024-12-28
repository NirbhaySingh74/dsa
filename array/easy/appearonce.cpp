#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int findNumApperarOnce(vector<int> &nums)
{
    int xo = 0;
    for (int num : nums)
    {
        xo = xo ^ num;
    }
    return xo;
}

int main()
{
    vector<int> nums = {1, 2, 2, 3, 3, 4, 4};
    cout << findNumApperarOnce(nums) << endl;
    return 0;
}