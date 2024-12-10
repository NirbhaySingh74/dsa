#include <iostream>
#include <vector>
using namespace std;

void targetsum(vector<int> &nums, vector<int> &ans, int target)
{

    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return;
            }
        }
    }
}
int main()
{
    vector<int> nums = {2, 7, 11, 15};
    vector<int> ans;
    int target = 9;
    targetsum(nums, ans, target);

    for (int nums : ans)
    {
        cout << nums << " ";
    }
}