#include <iostream>
#include <vector>
using namespace std;

void removeDuplivates(vector<int> &nums)
{
    int i = 0;
    for (int j = 1; j < nums.size(); j++)
    {
        if (nums[j] != nums[i])
        {
            nums[i + 1] = nums[j];
            i++;
        }
    }
    nums.resize(i + 1);
}

int main()
{
    vector<int> nums = {11, 11, 12, 12, 12, 14, 15, 24, 26};

    removeDuplivates(nums);
    for (int num : nums)
    {
        cout << num << " ";
    }
}