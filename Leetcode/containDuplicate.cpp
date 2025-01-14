#include <iostream>
#include <vector>
using namespace std;

bool containDup(vector<int> nums)
{
    int n = nums.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] == nums[j])
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    if (containDup(nums))
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
    return 0;
}