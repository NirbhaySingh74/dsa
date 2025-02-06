#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// selection sort -> This algo will near about big(n^2) time complexity where n is the size of the array
void sele_sort(vector<int> &nums)
{
    int min, n = nums.size(), j;
    for (int i = 0; i < n - 1; i++)
    {
        min = i;

        // Assign min index at min
        for (j = i + 1; j < n; j++)
        {
            if (nums[j] < nums[min])
                min = j;
        }
        // swap the index
        swap(nums[i], nums[min]);
    }
}

int main()
{
    vector<int> nums = {13, 46, 24, 52, 20, 9, 3, 4};
    sele_sort(nums);
    // print the array
    for (int num : nums)
    {
        cout << num << " ";
    }
}