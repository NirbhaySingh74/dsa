#include <iostream>
#include <vector>
using namespace std;

vector<int> printLeader_IN_Arr(vector<int> &nums, int n)
{
    vector<int> ans;
    for (int i = 0; i < n - 1; i++)
    {
        bool isLeader = true;
        for (int j = i + 1; j < n; j++)
        {
            if (nums[j] > nums[i])
            {
                isLeader = false;
                break;
            }
        }
        if (isLeader)
            ans.push_back(nums[i]);
    }
    ans.push_back(nums[n - 1]);
    return ans;
}

int main()
{
    vector<int> nums = {10, 22, 12, 0, 4, 8};
    vector<int> ans;
    ans = printLeader_IN_Arr(nums, nums.size());
    for (int num : ans)
    {
        cout << num << " ";
    }
}