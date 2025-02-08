#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &nums, int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high)
    {
        if (nums[left] <= nums[right])
        {
            temp.push_back(nums[left]);
            left++;
        }
        else
        {
            temp.push_back(nums[right]);
            right++;
        }
    }

    // Remaining elements in left half
    while (left <= mid)
    {
        temp.push_back(nums[left]);
        left++;
    }

    // Remaining elements in right half
    while (right <= high)
    {
        temp.push_back(nums[right]);
        right++;
    }

    // Copy elements back to original array
    for (int i = low; i <= high; i++)
    {
        nums[i] = temp[i - low]; // Correct index offset
    }
}

void mergeSort(vector<int> &nums, int low, int high)
{
    if (low >= high)
        return;

    int mid = low + (high - low) / 2;
    mergeSort(nums, low, mid);
    mergeSort(nums, mid + 1, high);

    // Merge
    merge(nums, low, mid, high);
}

int main()
{
    vector<int> nums = {2, 1, 4, 5, 2, 8, 7, 6};
    mergeSort(nums, 0, nums.size() - 1);

    // Print the sorted array
    for (int num : nums)
    {
        cout << num << " ";
    }
    return 0;
}
