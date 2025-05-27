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

// optimal approach with o(n) time complexity and o(1) space complexity
int optimal(vector<int> &nums)
{
    int n = nums.size() + 1, sum = 0;
    int sn = (n * (n + 1)) / 2;
    // cout << "Sn" << sn;
    for (int num : nums)
    {
        sum += num;
    }
    return sn - sum;
}

// second optimal using xor
int second_optimal(vector<int> nums, int n)
{
    int xor1 = 0, xor2 = 0;

    for (int i = 0; i < n - 1; i++)
    {
        xor1 ^= nums[i];
    }

    for (int i = 1; i <= n; i++)
    {
        xor2 ^= i;
    }

    return xor1 ^ xor2;
}
int main()
{
    vector<int> nums = {1, 2, 4, 5};
    // cout << bruteMissingNum(nums);
    // cout << betteorMissingNum(nums);
    // cout << optimal(nums);
    cout << second_optimal(nums, nums.size());
}