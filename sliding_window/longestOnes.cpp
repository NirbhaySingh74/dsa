#include <iostream>
#include <vector>
using namespace std;

int longestOnes(vector<int> &nums, int k)
{
    int mx = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        int count = 0;
        for (int j = i; j < nums.size(); j++)
        {
            if (nums[j] == 0)
            {
                count = count + 1;
            }

            if (count == k)
            {
                mx = max(mx, j - i + 1);
            }
        }
    }
    return mx;
}

int main()
{
    vector<int> nums = {1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0};
    cout << longestOnes(nums, 2);
    return 0;
}