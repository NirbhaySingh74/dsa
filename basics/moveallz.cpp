#include <iostream>
#include <vector>
using namespace std;

void movez(vector<int> &nums)
{
    int n = nums.size(), j = -1;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 0)
        {
            j = i;
            break;
        }
    }

    if (j == -1)
        return;

    for (int i = j + 1; i < n; i++)
    {
        if (nums[i] != 0)
        {
            swap(nums[i], nums[j]);
            j++;
        }
    }
}

void movezmoreopt(vector<int> &nums)
{
    int j = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            swap(nums[i], nums[j]);
            j++;
        }
    }
}

int main()
{
    vector<int> nums = {1, 3, 0, 4, 3, 6, 0, 9, 8, 3, 0, 8};
    // movez(nums);
    movezmoreopt(nums);
    for (int num : nums)
    {
        cout << num << " ";
    }
}