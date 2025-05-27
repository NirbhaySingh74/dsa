#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    // push all the element into original array
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

void mergeSort(vector<int> &arr, int low, int high)
{
    if (low >= high)
    {
        return;
    }

    int mid = (low + high) / 2;
    // sort low to mid
    mergeSort(arr, low, mid);
    // sort mid+1 to high
    mergeSort(arr, mid + 1, high);

    // sort the array
    merge(arr, low, mid, high);
}

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

bool BetterContianDuplicate(vector<int> nums)
{
    int n = nums.size();
    for (int i = 0; i < n - 1; i++)
    {
        if (nums[i] == nums[i + 1])
        {
            return true;
        }
    }
    return false;
}

bool optimal_containDuplicate(vector<int> nums)
{
    set<int> st;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (st.find(nums[i]) == st.end())
        {
            st.insert(nums[i]);
        }
        else
        {
            return true;
        }
    }
    return false;
}

int main()
{
    vector<int> nums = {1, 3, 2, 5, 4, 4};
    // if (containDup(nums))
    // {
    //     cout << "True";
    // }
    // else
    // {
    //     cout << "False";
    // }
    // mergeSort(nums, 0, nums.size());
    // if (BetterContianDuplicate(nums))
    // {
    //     cout << "True";
    // }
    // else
    // {
    //     cout << "False";
    // }

    if (optimal_containDuplicate(nums))
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
    return 0;
}