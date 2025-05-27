#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// This is optimal approach to find Largest in Array we can also solve it by using sorting the array but that will take O(N*log(N)) and by using this algorithm is is taking 0(n) Time complexity and space complexity is 0(1)
int FindMax(vector<int> &nums)
{
    int num = nums[0];
    for (int i : nums)
    {
        if (i > num)
        {
            num = i;
        }
    }
    return num;
}

// second Larget in Array
int secondLargest(vector<int> &nums)
{
    int largest = nums[0], slargest = -1;

    for (int num : nums)
    {
        if (num > largest)
        {
            slargest = largest;
            largest = num;
        }
        else if (num < largest && num > slargest)
        {
            slargest = num;
        }
    }

    return slargest;
}

// smallest element in array
int smallest(vector<int> &nums)
{
    int smallest = nums[0];
    for (int num : nums)
    {
        if (num < smallest)
        {
            smallest = num;
        }
    }
    return smallest;
}

// find second smallest
int second_smallest(vector<int> &nums)
{
    int smallest = INT_MAX, ssmallest = INT_MAX;
    cout << smallest << endl;
    for (int num : nums)
    {
        if (num < smallest)
        {
            ssmallest = smallest;
            smallest = num;
        }
        else if (num < ssmallest && num != smallest)
        {
            ssmallest = num;
        }
    }
    return ssmallest;
}
int main()
{
    vector<int> nums = {1, 2, 4, 7, 7, 5};
    cout << "Largest Element: " << FindMax(nums) << endl;
    cout << "Second Largest Element : " << secondLargest(nums) << endl;
    cout << "Smallest Element : " << smallest(nums) << endl;
    cout << "Second Smallest Element : " << second_smallest(nums);
}