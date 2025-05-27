#include <iostream>
#include <vector>
using namespace std;

// Bruteforce method which takes o(2 n) time and o(n) space
void rearrangeArray(vector<int> &nums)
{
    vector<int> posNums;
    vector<int> negNums;
    int n = nums.size(), j = 0, k = 0;

    // Correct logic to split based on sign
    for (int i = 0; i < n; i++)
    {
        if (nums[i] >= 0)
            posNums.push_back(nums[i]);
        else
            negNums.push_back(nums[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0 && j < posNums.size())
            nums[i] = posNums[j++];
        else if (i % 2 != 0 && k < negNums.size())
            nums[i] = negNums[k++];
    }

    // Moved outside the loop
    for (int num : nums)
    {
        cout << num << " ";
    }
}

// optimal approach which takes o(n) time and o(n) space
vector<int> optimal_Rearrange(vector<int> &nums)
{
    int n = nums.size();
    int posIndex = 0, negIndex = 1;
    vector<int> ans(n, 0);
    for (int i = 0; i<n; i++)
    {
        if (nums[i] > 0)
        {
            ans[posIndex] = nums[i];
            posIndex = posIndex + 2;
        }
        else
        {
            ans[negIndex] = nums[i];
            negIndex = negIndex + 2;
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {1, 2, -4, -5};
    // rearrangeArray(nums);

    // for (int num : nums)
    //     cout << num << " ";

    vector<int> ans;
    ans = optimal_Rearrange(nums);
    for (int num : ans)
    {
        cout << num << " ";
    }
}