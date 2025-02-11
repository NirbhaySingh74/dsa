#include <iostream>
#include <vector>
using namespace std;

// brute approach which takes o(n^2) tiem complexity
int bruteMissingNum(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 1; i <= n; i++)
    {
        int present = 0;
        for (int j = 0; j < n; j++)
        {
            if (i == nums[j])
            {
                present = 1;
                break;
            }
        }
        if (present == 0)
            return i;
    }
    return -1;
}

// better approach which takes o (n) time complexity and o(n) space complexity
int betteorMissingNum(vector<int> &nums)
{
    vector<int> temp(nums.size() + 1, 0);

    for (int i = 0; i < nums.size(); i++)
    {
        temp[i] = 1;
    }

    for (int i = 1; i <= temp.size(); i++)
    {
        if (temp[i] == 0)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 6};
    // cout << bruteMissingNum(nums);
    cout << betteorMissingNum(nums);
}