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
int main()
{
    vector<int> nums = {1, 2, 4, 7, 7, 5};
    cout << "Largest : " << FindMax(nums) << endl;
    cout << "Second Largest : " << secondLargest(nums);
}