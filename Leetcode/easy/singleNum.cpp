#include <iostream>
#include <vector>
using namespace std;

int single_num(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (nums[j] == nums[i])
            {
                count = count + 1;
            }
        }
        if (count == 1)
            return nums[i];
    }
    return -1;
}
int main()
{
    vector<int> nums = {1, 1, 2, 2, 3, 3, 4, 4, 5};
    cout << single_num(nums);
}