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
    vector<int> nums = {1, 1, 2, 2, 2, 3, 3};

    removeDuplivates(nums);
    for (int num : nums)
    {
        cout << num << " ";
    }
}