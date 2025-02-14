#include <iostream>
#include <vector>
using namespace std;

// brute force approach which takes o(n^2) Time complexity
vector<int> two_pointer_brute(vector<int> &nums, int target)
{
    int n = nums.size();
    vector<int> ans;

    for (int i = 0; i < n - 1; i++)
    {

        for (int j = i + 1; j < n; j++)
        {

            if (nums[i] + nums[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                break;
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {2, 6, 5, 8, 11};
    int target = 11;
    vector<int> ans;
    ans = two_pointer_brute(nums, target);

    for (int num : ans)
    {
        cout << num << " ";
    }
}