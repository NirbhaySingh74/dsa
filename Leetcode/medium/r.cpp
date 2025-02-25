#include <iostream>
#include <vector>

using namespace std;

void removeDuplicate2(vector<int> &nums)
{
    int n = nums.size();
    if (n <= 2)
        return;

    int j = 1;
    int count = 1;

    for (int i = 1; i < n; i++)
    {
        if (nums[i] == nums[i - 1])
        {
            count++;
        }
        else
        {
            count = 1;
        }

        if (count <= 2)
        {
            nums[j] = nums[i];
            j++;
        }
    }

    nums.resize(j);
}

int main()
{
    vector<int> nums = {1, 1, 1, 2, 2, 3};
    removeDuplicate2(nums);

    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
