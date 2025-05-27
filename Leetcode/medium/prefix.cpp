#include <iostream>
#include <vector>
using namespace std;

void calculatePrefix(vector<int> &nums)
{
    vector<int> ans(nums.size(), 0);
    int sum = 0;
    int longest = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        ans[i] = sum;
        if(sum > longest)
        longest = sum;
    }

    // print the prefixsum
    for (int num : ans)
    {
        cout << num << " ";
    }
}

int main()
{
    vector<int> nums = {-5, 1, 5, 0, -7};
    calculatePrefix(nums);
}