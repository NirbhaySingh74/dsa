#include <iostream>
#include <vector>
using namespace std;

// bruteforce taking near about o(n^2) Time complexity
int brute_findMajorityNum(vector<int> &nums, int N)
{
    int count;
    for (int i = 0; i < N - 1; i++)
    {
        count = 1;
        for (int j = i + 1; j < N; j++)
        {
            if (nums[i] == nums[j])
            {
                count++;
            }
        }
        // cout << count << " " << endl;
        if (count > N / 2)
            return nums[i];
    }
    return -1;
}

int main()
{
    vector<int> nums = {3, 2, 3, 4, 3, 1, 3};
    cout << brute_findMajorityNum(nums, nums.size());
    return 0;
}