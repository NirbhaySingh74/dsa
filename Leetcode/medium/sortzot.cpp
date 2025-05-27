#include <iostream>
#include <vector>
using namespace std;

// optimal approach which takes o(n) Time complexity
void sortzeroOneTwo(vector<int> &nums)
{
    int low = 0, mid = 0, high = nums.size() - 1;
    while (mid <= high)
    {
        // condition for zero
        if (nums[mid] == 0)
        {
            swap(nums[mid], nums[low]);
            low++;
            mid++;
        }

        // condition for 1
        else if (nums[mid] == 1)
        {
            mid++;
        }

        // condition for 2
        else
        {
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}

int main()
{
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    sortzeroOneTwo(nums);

    // print array after sorting
    for (int num : nums)
    {
        cout << num << " ";
    }
}