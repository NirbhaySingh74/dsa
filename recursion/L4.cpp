#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// reverse an array using 2 pointer
void revArr(vector<int> &nums)
{
    int l = 0, r = nums.size() - 1;
    while (l < r)
    {
        int temp = nums[l];
        nums[l] = nums[r];
        nums[r] = temp;
        l++;
        r--;
    }
}

// reverse an array using recursion
void reverseArrRec(vector<int> &nums, int i, int n)
{
    if (i >= n / 2)
        return;
    swap(nums[i], nums[n - i - 1]);
    reverseArrRec(nums, i + 1, n);
}

// check a string is palindrome or not
bool checkPalindrome(string &str, int i, int n)
{
    if (i >= n / 2)
        return true;
    if (str[i] != str[n - i - 1])
        return false;

    return checkPalindrome(str, i + 1, n);
}
int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    // revArr(nums);
    // reverseArrRec(nums, 0, nums.size());
    // for (int num : nums)
    // {
    //     cout << num << " ";
    // }

    // check palindrom
    string str = "madcam";
    if (checkPalindrome(str, 0, str.length()))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
}