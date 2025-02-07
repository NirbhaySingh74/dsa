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

// bubble sort takes o(n^2) Time complexity
void bubble_sort(vector<int> &nums)
{
    int n = nums.size(), k = 0, swap = 0;
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "It runs only for" << i << endl;
            if (nums[j] > nums[j + 1])
            {
                // swap(nums[j], nums[j + 1]);
                swap = 1;
                int temp = nums[j + 1];
                nums[j + 1] = nums[j];
                nums[j] = temp;
            }
        }
        // cout << nums[n - k - 1] << endl;
        k++;
        if (swap == 0)
            break;
    }
}
int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    // sele_sort(nums);
    bubble_sort(nums);
    // print the array
    for (int num : nums)
    {
        cout << num << " ";
    }
}