#include <iostream>
#include <vector>
using namespace std;

// Bruteforce method which takes o(2 n) time and o(n) space
void rearrangeArray(vector<int> &nums)
{
    vector<int> temp1;
    vector<int> temp2;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > 0)
            temp1.push_back(nums[i]);

        else
            temp2.push_back(nums[i]);
    }
    int j = 0, k = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (i % 2 != 0)
        {
            nums[i] = temp2[j];
            j++;
        }
        else
        {
            nums[i] = temp1[k];
            k++;
        }
    }
}

// optimal approach which takes o(n) time and o(n) space
vector<int> optimal_Rearrange(vector<int> &nums)
{
    int n = nums.size();
    int posIndex = 0, negIndex = 1;
    vector<int> ans(n, 0);
    for (int i = 0; i < n; i++)
    {
        if (nums[i] < 0)
        {
            ans[negIndex] = nums[i];
            negIndex += 2;
        }
        else
        {
            ans[posIndex] = nums[i];
            posIndex += 2;
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